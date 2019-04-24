#include <iostream>
#include <fstream>

std::string DNAbase_to_mRNAbase(std::string & strand);
std::string translate(std::string mRNA, std::ifstream &dict);
std::string to_aminoAcid(std::string input);
std::string to_aminoAcid2(std::string input);

int main(){
  std::ifstream dna_fin("frameshift_mutations.txt");
  std::string strand, strand2;
  if (dna_fin.fail()) {
      std::cerr << "File cannot be read, opened, or does not exist.\n";
      exit(1);
  }
  while(getline(dna_fin, strand)){
    getline(dna_fin, strand2);
    std::cout<<to_aminoAcid(strand)<<std::endl; //print
    std::cout<<to_aminoAcid2(strand2)<<'\n';
  }
  dna_fin.close();
  return 0;
}

std::string DNAbase_to_mRNAbase(std::string & strand){ //make dna to mrna
  std::string result;
  for (int i = 0; i < strand.size(); i++){
    if (toupper(strand[i] == 'A')){ //toupper
      result += 'U';
    }else if(toupper(strand[i] == 'T')){
      result += 'A';
    }else if(toupper(strand[i] == 'G')){
      result += 'C';
    }else if(toupper(strand[i] == 'C')){
      result += 'G';
        }
    }
    return result;
}

std::string translate(std::string mRNA, std::ifstream &dict){ //make mrna to amino
    std::string key, value;
    dict.clear(); // reset error state
    dict.seekg(0); // return file pointer to the beginning
    while (dict >> key >> value) { //while going throug the library
        if (key == mRNA) {
            return value;
        }
    }
    return "";
}

//make the whole line
std::string to_aminoAcid(std::string input){
    std::ifstream codon_fin("codons.tsv");
    if (codon_fin.fail()) {
          std::cerr << "File cannot be read, opened, or does not exist.\n";
        exit(1);
    }
    std::string three_letter;
    std::string amino_acid;
    for(int i = 0; i < input.size(); i++){
        bool start = false;
        std::string message;
        input = DNAbase_to_mRNAbase(input);
        for (int i = 0; i <= input.length(); i = i + 3) {
            three_letter = input.substr(i, 3);
            amino_acid = translate(three_letter, codon_fin);
            if (start) {
                if (amino_acid != "Stop"){ //if stop dont put the dash
                    message += ("-" + amino_acid);
                } else {
                    break;
                }
            }
            if (amino_acid == "Met"){ //met means start
                start = true;
                message += amino_acid;
            }
        }
        codon_fin.close();
        return message;
    }
    return "";
}


std::string to_aminoAcid2(std::string input){
    std::ifstream codon_fin("codons.tsv");
    if (codon_fin.fail()) {
        std::cerr << "File cannot be read, opened, or does not exist.\n";
        exit(1);
    }
    std::string three_letter;
    std::string amino_acid;

    bool start = false;
    std::string message;
    input = DNAbase_to_mRNAbase(input);
    int count = 1;
    for (int i = 0; i <= input.length(); i = i + count) {
        three_letter = input.substr(i, 3);
        amino_acid = translate(three_letter, codon_fin);
        if(amino_acid == "Stop" && start){
          return message;
        }
        if (start && amino_acid != "Stop" && amino_acid != ""){ //if stop dont put the dash
                message += ("-" + amino_acid);
        }
        if (amino_acid == "Met"){ //met means start
            start = true;
            message += amino_acid;
            count = 3;
        }
    }
    codon_fin.close();
    return message;
}

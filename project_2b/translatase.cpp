/*
Nursima Donuk
Project 2B
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

std::string dna_to_mrna_to_amino(std::string sentence){
  std::string result;
  for(int i = 0; i < sentence.size(); i++){
    if (sentence[i] == 'a' || sentence[i] == 'A'){
      result = result + 'U';
    }else if(result[i] == 't' || result[i] == 'T'){
      result = result + 'A';
    }else if(result[i] == 'g' || result[i] == 'G'){
      result = result + 'C';
    }else if(result[i] == 'c' || result[i] == 'C'){
      result = result + 'G';
    }
  }
  std::ifstream dict("codons.tsv");
  std::string key, value;
  dict.clear();
  dict.seekg(0);
  std::string three;
  std::string amino;
  for (int j = 0; j < result.size(); j+=3){
    three = result.substr(i, 3);
    if(three == "AUG"){
      while(dict >> key >> value){
        amino = amino + value + "-"
      }
    }
  }

}

/*void dictionary_read(std::ifstream &dict) {
    std::string key, value;
    dict.clear();
    dict.seekg(0);
    while (dict >> key >> value) {
        std::cout << "key: " << key << std::endl;
        std::cout << "value: " << value << std::endl;
    }
}
std::string mrna_to_codons(std::string line){
  std::ifstream dict("codons.tsv");
  if(dict.fail()){
    std::cerr<<"File cannot be read, opened, or does not exist.\n";
    exit(1);
  }
  std::string result;
  std::string key, value;
  for(int i = 0; i < line.size(); i = i + 3){
    std::string three;
    three = line.substr(i, 3);
    while(dict >> key >> value){
      if(three == "AUG"){
        result = result + value + "-";
        if(three == "UAA" || three =="UAG" || three == "UGA"){
          break;
        }else{
          result = result + value + "-";
        }
      }
    }
  }
  return result;
}
*/

int main(){
  std::ifstream fin("dna2b.txt");
  if(fin.fail()){
    std::cerr<<"File cannot be read, opened, or does not exist.\n";
    exit(1);
  }
  return 0;
}

/*
Nursima Donuk
Project 2A
*/

#include <iostream>
#include <cstdlib>
#include <fstream> //include the fstream

char DNAbase_to_mRNAbase(char){
  char letter;
  while(std::cin>>letter){

  }
}
int main(){
  std::ifstream fin("dna.txt");
  if(fin.fail()){ //if i doesnt read
    std::cerr<<"File cannot be read, opened, or does not exist.\n";
    exit(1);
  }
  std::string strand;
  while(getline(fin, strand)){
    for (int i = 0; i< strand.size(); i++){ //go through every single letters
      if (strand[i] == 'a' || strand[i] == 'A'){ //if the text check for lower and upper case letters
        strand[i] = 'U'; //then change it to u
      }else if(strand[i] == 't' || strand[i] == 'T'){
        strand[i] = 'A';
      }else if(strand[i] == 'g' || strand[i] == 'G'){
        strand[i] = 'C';
      }else if(strand[i] == 'c' || strand[i] == 'C'){
        strand[i] = 'G';
      }
    }
    std::cout<<strand<<std::endl; //print out the result
  }
  fin.close();
}

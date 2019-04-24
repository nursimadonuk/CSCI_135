#include <iostream>
#include <string>

void remo3ve_e(std::string & sentence){
  int i = 0;
  while(i < sentence.length()){
    if(sentence[i]=='e'){
      sentence = sentence.substr(0,i)+sentence.substr(i+1);
    }
    i++;
  }
  std::cout << sentence << endl;
}

int main(){
  remo3ve_e("hello apple ear");
  return 0;
}

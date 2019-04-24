#include <iostream>
#include <string>

std::string foo(std::string w){
  std::string newW;
  for(int ind = 0; ind < w.length(); ind++){
    int j = ind+1;
    for(int i = 0; i < j; i++){
      newW = newW + w[ind];
    }
  }
  return newW;
}

int main(){
  std::cout<<foo("there")<<std::endl;
  return 0;
}

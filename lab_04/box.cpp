#include <iostream>

void box(int wid, int hei){
  int counth = 0;
  int countw;
  while(counth < hei){
    for(countw = 0; countw < wid; countw++){
      std::cout<<"*";
    }
    std::cout<<"\n";
    counth++;
    std::cout<<"\n";
  }
}

int main(){
  std::cout<<"Input width: ";
  int width;
  std::cin>>width;
  std::cout<<"Input height: ";
  int height;
  std::cin>>height;
  std::cout<<"\n";
  std::cout<<"Shape: ";
  std::cout<<"\n";
  box(width, height);
}

#include <iostream>

void checkerb(int wid, int hei){
  int counth = 0;
  int countw = 0;
  while(counth < hei){
    for(countw =0; countw < wid; countw++){
      if(counth % 2 == 0){
        if(countw % 2 == 0){
          std::cout<<"*";
        }else if(countw % 2 == 1){
          std::cout<<" ";
        }
      }else if(counth % 2 == 1){
        if(countw % 2 == 0){
          std::cout<<" ";
        }else if(countw % 2 == 1){
          std::cout<<"*";
        }
      }
    }
    std::cout<<"\n";
    counth++;
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
  checkerb(width, height);
  return 0;
}

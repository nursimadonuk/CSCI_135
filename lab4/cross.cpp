#include <iostream>
#include <string>


//THIS PROGRAM DOES NOT WORK!!!!!!!
void cross(int size){
  int count;
  int spacesMid = 6;
  int spacesBef = 0;
  int half_width = size/2;
  for(count = 1; count <= half_width; count++){
    for( int i = 0; i < spacesBef; i++){
      std::cout<<" ";
    }
    std::cout<<"*";
    for(int j = 0; j < spacesMid; j++){
      std::cout<<" ";
    }
    std::cout<<"*";
    std::cout<<std::endl;
  }
  spacesMid -= 2;
  spacesBef++;
}
int main(){
  std::cout<<"Input size: ";
  int size;
  std::cin>>size;
  std::cout<<"\n";
  std::cout<<"Shape: ";
  std::cout<<"\n";
  cross(size);
}

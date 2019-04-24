#include <iostream>

int main(){
  std::cout<<"Enter the side length of the diamond: ";
  int side;
  std::cin>>side;
  int max_width = (side * 2) - 1;
  int half_width = (max_width) / 2;
  int dots = 1;
  for (int i = 0; i < side; i++){
    for(int j = 0; j < half_width; j++){
      std::cout<<" ";
    }
    for (int j = 0; j < dots; j++){
      std::cout<<"*";
    }
    std::cout<<std::endl;
    dots += 2;
    half_width--;
  }

  dots = max_width-2;
  half_width = 1;
  for (int i = 0; i < side; i++){
    for(int j = 0; j < half_width; j++){
      std::cout<<" ";
    }
    for(int j = 0; j < dots; j++){
      std::cout<<"*";
    }
    std::cout<<std::endl;
    dots -= 2;
    half_width++;
  }
  return 0;
}

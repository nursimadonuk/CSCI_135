/*
Write a program that reads an integer
and prints whether it is negative, zero, or positive.
*/
#include <iostream>

int func(){
  std::cout<<"Enter an integer: ";
  int num;
  std::cin>>num;
  if (num == 0){
    std::cout<<"this is 0\n";
  }else if (num > 0){
    std::cout<<"this is positive\n";
  }else if(num < 0){
    std::cout <<"this is negative\n";
  }
}
int main(){
  func();
  return 0;
}

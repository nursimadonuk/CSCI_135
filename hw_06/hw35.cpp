#include <iostream>

int main(){
  int num1, num2, num3; //declare variables
  std::cout<<"Enter a number: "; //ask user to enter input
  std::cin>>num1; //take in input
  std::cout<<"Enter a number: ";
  std::cin>>num2;
  std::cout<<"Enter a number: ";
  std::cin>>num3;
  if (num1 < num2 && num2 < num3){ //if the first is less then second and second is less than third
    std::cout<< "increasing\n"; //then is increasing
  }else if (num1 > num2 && num2 > num3){ // the first is the greatest and third is smallest
    std::cout<<"decreasing\n"; //then it is decreasing
  }else{
    std::cout<<"neither\n"; //else it's neither
  }
}

#include <iostream>
//we want to include cmath becasue we want to be able to use the power function
#include <cmath>

int main(){
  std::cout<<"Enter your initial balance: "; //ask user to input
  double balance; //declare variable
  std::cin>>balance; //take input
  std::cout<<"Enter the interest rate: ";
  double interest;
  std::cin>>interest;
  std::cout<<"Enter the number of years: ";
  int year;
  std::cin>>year;
  double answer; //declare answer
  answer = balance * pow((1+interest), year);
  //exponential function equation is above
  std::cout<<answer<<std::endl;
  return 0;
}

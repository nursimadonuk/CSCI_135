/*
Author: Nursima Donuk
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 1D
*/

#include <iostream>

int main(){
  int num;
  char op;
  char prevOp = '+'; //make prvious operation +
  int answer = 0;
  std::cin>>num; //get in a number
  while(std::cin>>op)/{ //while we are reading operations
    if (op == '^'){ //if we have a ^ then mulltiply the number by itself
      num = num*num;
      std::cin>>op;
    }
    if (prevOp == '+'){
      answer += num;
    }else if(prevOp == '-'){
      answer -= num;
    }
    prevOp = op;
    std::cin>>num; //take in a new number
    if (prevOp == ';'){
      std::cout<<answer<<'\n';
      answer = 0;
      prevOp = '+';
    }
  }

  return 0;
}

/*
Author: Nursima Donuk
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 1C
*/

#include <iostream>

int main(){
  int num;
  char operation;
  std::cin>>num;
  int answer = num;
  while (std::cin>>operation>>num){
    if (operation == '+'){
      answer = answer + num;
    }else if (operation == '-'){
      answer = answer - num;
    }else if(operation == ';'){
      std::cout<<answer<<'\n';
      answer = num;
    }
  }
  std::cout<<answer<<std::endl;
  return 0;
}

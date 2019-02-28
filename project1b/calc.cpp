/*
Author: Nursima Donuk
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 1B
*/

#include <iostream>
int main(){ //declare main
  int num;   //declare the variable for the numbers
  char operation;  //declare the variable for the + and -
  std::cin>>num;  //taking input
  int answer = num; //setting the answer to the first number in file
  while (std::cin>>operation>>num){ //while reading the file
    if (operation == '+'){ //if we have a +
      answer = answer + num; //add the number
    }else if (operation == '-'){ //if we have a -
      answer = answer - num; //subtract the number
    }
  }
  std::cout<<answer<<'\n'; //print out the answer at the end
  return 0;  //return 0 to see that the program successfully runs
}

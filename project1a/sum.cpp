/*
Nursima Donuk
CSCI 135
Project 1, task A
*/

#include <iostream>
#include <string>

int main(){
  int file;  //declare the file variable as an integer
  int sum = 0;  //declare the sum variable and set it equal to zero
  while (std::cin >> file){  //while reading the file
    //std::cout<< file << '\n';
    sum = sum + file; //add the integer to the sum
  }
  std::cout<<sum<< '\n';  //print out the sum at the end
  return 0; //return zero
}

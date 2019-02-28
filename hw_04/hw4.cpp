/*
Write a program that carries out the following tasks:
Open a file with the name hello.txt.
Store the message “Hello, World!” in the file.
Close the file. Open the same file again.
Read the message into a string variable and print it.
Nursima Donuk, CSCI 135
HW E8.1
*/

#include <iostream>
#include <string>

int main(){
  std::string hello;
  while(std::cin>>hello){
    std::cout<<hello<< " ";
  }
  std::cout<<'\n';
  return 0;
}

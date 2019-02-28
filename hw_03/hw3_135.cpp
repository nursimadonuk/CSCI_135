/*
Author: Nursima Donuk
Course: CSCI 135
Instructor: Genady Maryash
Assignment: Homework E4.8

Takes in a word as a string
and prints out every letter in the string on separete lines
*/

#include <iostream>
#include <string>

using namespace std;
void func(string w){ //declare the function called func
  int num;  //declare integer num to use for index
  string letter; //declare letter which will represent each letter in the string
  //for loop, num=0 as long as num is less than the size of word perform the tasks and then add one to num and repeat
  for (num = 0; num < w.size(); num++){
    letter = w[num];
    cout<<letter<<'\n';
  }
}

int main(){
  string word;  //declare variable word
  cout<<"Enter a word: "; //ask user to enter a word
  cin>>word;  //this is where we will take input
  func(word); //call the function
  return 0;
}

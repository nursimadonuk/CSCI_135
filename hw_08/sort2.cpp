/*
Nursima Donuk
CSCI 135
Homework E5.14
*/

#include <iostream>

void sort2(int& a, int& b){
  if (a > b){ //if a is greater than b
    int u = a; //set some int u to be equal to a
    a = b; //then set a equal to b
    b = u; //then finally change b to be u which was a
  }else{ //otherwise a and b remain the same
    a = a;
    b = b;
  }
  std::cout<<"a = "<< a << " b = " << b <<std::endl;
}

int main(){
  int a1 = 2;
  int b1 = 3;
  int a2 = 4;
  int b2 = 1;
  sort2(a1, b1); // a is still 2, b is still 3
  sort2(a2, b2); // a is now 1, b is now 4
  return 0;
}

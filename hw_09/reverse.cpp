/*
Nursima Donuk
Hw E6.7
Write a function void reverse()
that reverses the sequence of elements in an array.
*/
#include <iostream>

void reverse(int list[10]){
  int newLst[10];
  int i = 10;
  int ind = 0;
  for (int j = 0 ; j < i; i--){
    newLst[ind] = list[i-1];
    ind++;
  }

}

int main(){
  int lst[10];
  for (int i = 0; i < 10; i++){
    lst[i]=i;
  }
  reverse(lst);
  return 0;
}

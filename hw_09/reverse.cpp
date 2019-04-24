/*
Nursima Donuk
Hw E6.7
Write a function void reverse()
that reverses the sequence of elements in an array.
*/
#include <iostream>

void reverse(int arr[], int const array_size){
  int start = 0;
  int end =  array_size - 1;
  while(start < end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
int main(){
  int example[] = {
    1, 2, 3, 4
  };
  reverse(example, 4);
  for(int = 0; i<4; i++){
    std::cout<<example[i]<<std::endl;
  }
  return 0;
}

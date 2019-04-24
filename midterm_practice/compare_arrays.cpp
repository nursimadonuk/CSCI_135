#include <iostream>

bool equals(char* a, int a_size, char* b, int b_size){
  if(a_size != b_size){
    return false;
  }
  for(int i = 0; i < a_size; i++){
    if(a[i] != b[i]){
      return false;
    }
  }
  return true;
}


int main(){
  int SIZE = 5;
  char arr[] = {'a', 'b', 'c', 'd', 'e'};
  char arr2[] = {'a', 'b', 'c', 'd', 'e'};
  if(equals(arr, SIZE, arr2, SIZE)){
    std::cout<<"The two arrays are equal.\n";
  }else{
    std::cout<<"The two arrays are not equal.\n";
  }
  return 0;
}

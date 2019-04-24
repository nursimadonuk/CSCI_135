#include <iostream>

const int SIZE = 4;
int* check(int array[][SIZE], int rows, int value){
  int* p = nullptr;
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < SIZE; j++){
      if(array[i][j] == value){
        p = new int [2];
        p[0] = i;
        p[1] = j;
        i = rows;
        j = SIZE;
      }
    }
  }
  return p;
}

int main(){
  int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  int* x = check(arr, 3, 8); 
  for(int j = 0; j < 2; j++){
    std::cout<<x[j]<<" ";
  }
  return 0;
}

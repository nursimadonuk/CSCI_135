#include <iostream>

int SIZE;
void tri(char* array[SIZE], int size){
  for(int i = 0; i < size; i++){
    array[i] = new char [size - i];
    for(int j = 0; j < size - i; j++){
      array[i][j] = 'X';
    }
  }
  for(int h = 0; h < size; h++){
    for(int k = 0; k < size-h; k++){
      std::cout<<array[h][k];
    }
    std::cout<<'\n';
  }
}

int main(){
  char* array[5];
  tri(array, 5);
  return 0;
}

#include <iostream>

void add_m(int *array, int size, int m, int n){
  std:: cout << array << std::endl;
  /*
  int new_array[size];
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (array[i] == m) {
      if (array[i+1] != n) {
        count ++;
        array = new int [size + count];
      }
    }
  }
  */
}


int main(){
  int test[5];
  add_m(test,5,1,2);
}

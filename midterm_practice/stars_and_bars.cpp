#include <iostream>

void bar_chart(int* value_array, int size){
  int stars = 0;
  int bars = 0;
  for(int i = 0; i < size; i++){
    if(value_array[i] > 0 && value_array[i] <= 40){
      stars = value_array[i];
      bars = 40 - stars;
      for(int j = 0; j < stars; j++){
        std::cout<<"*";
      }
      for(int k = 0; k < bars; k++){
        std::cout<<"-";
      }
      std::cout<<'\n';
    }
  }
}

int main(){
  int array[] = {15, 20, -2, 40, 7, 1, 90, 10};
  bar_chart(array, 8);
  return 0;
}

#include <iostream>

int main(){
  const int SIZE = 500;
  int list[SIZE];
  int num;
  int ind = 0;
  do{
    std::cout<<"Please enter an integer: ";
    std::cin>>num;
    list[ind]=num;
    ind++;
  }
  while(list[ind-1]!=list[ind-2]);

  double sum = 0;
  double count = 0;
  for (int j = 0; j< ind; j++){
    sum += list[j];
    count++;
  }
  double average = sum/count;
  std::cout<<"Average: "<<average<<std::endl;

  int curlargest = list[0];
  int seclargest = list[1];
  for(int j = 1; j<ind; j++){
    if(list[j]>curlargest){
      seclargest = curlargest;
      curlargest = list[j];
    }
  }
  std::cout<<"The second largest number is: "<<seclargest<<std::endl;

  int evencount = 0;
  for(int j = 0; j < ind; j++){
    if(list[j]%2 == 0){
      evencount++;
    }
  }
  std::cout<<"You have entered "<<evencount<<" even numbers."<<std::endl;
  
  return 0;
}

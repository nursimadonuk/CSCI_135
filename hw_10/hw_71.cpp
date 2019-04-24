#include <iostream>


double sort2(double* p, double* q){
  if(*q < *p){
    *q = *p + *q;
    *p = *q - *p;
    *q = *p + *q;
  }
  return *p;
}

int main(){
  double x = 3.0;
  double y = 2.0;
  std::cout<<sort2(&x, &y);
  return 0;
}

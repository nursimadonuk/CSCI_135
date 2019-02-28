#include <iostream>
//Task A
bool isDivisibleBy(int n, int d){
  if(n % d == 0){
    return true;
  }else{
    return false;
  }
}
//Task B
bool isPrime(int n){
  int count;
  int num = 0;
  for (count = 2; count < n; count++){
    if(n % count == 0){
      num++;
    }
  }
  if(num > 0){
    return false;
  }else if(n == 0){
    return false;
  }else{
    return true;
  }
}
//Task C
int nextPrime(int n){
  do{
    n++;
  }
  while(isPrime(n) == 0);
  return n;
}
//Task D
int countPrimes(int a, int b){
  int num = 0;
  while(a <= b){
    if(isPrime(a) == 1){
      num++;
    }
    a++;
  }
  return num;
}
//Task E
bool isTwinPrime(int n){
  if((isPrime(n+2)== 1 || isPrime(n-2) == 1)&& isPrime(n) == 1){
    return true;
  }else{
    return false;
  }
}
//Task F
int nextTwinPrime(int n){
  do{
    n++;
  }
  while(isTwinPrime(n) == 0);
  return n;
}
//Task G
int largestTwinPrime(int a, int b){
  int num = 0;
  int tp = -1;
  while(a <= b){
    if(isTwinPrime(a) == 1){
      tp = a;
    }
    a++;
  }
  return tp;
}
int main(){
  std::cout<<isDivisibleBy(100, 25)<<std::endl;
  std::cout<<isDivisibleBy(35, 17)<<std::endl;
  std::cout<<isPrime(13)<<std::endl;
  std::cout<<isPrime(6)<<std::endl;
  std::cout<<isPrime(1)<<std::endl;
  std::cout<<isPrime(14)<<std::endl;
  std::cout<<isPrime(2)<<std::endl;
  std::cout<<nextPrime(14)<<std::endl;
  std::cout<<nextPrime(17)<<std::endl;
  std::cout<<countPrimes(1, 100)<<std::endl;
  std::cout<<isTwinPrime(5)<<std::endl;
  std::cout<<isTwinPrime(2)<<std::endl;
  std::cout<<nextTwinPrime(2)<<std::endl;
  std::cout<<nextTwinPrime(11)<<std::endl;
  std::cout<<largestTwinPrime(5, 18)<<std::endl;
  std::cout<<largestTwinPrime(1, 31)<<std::endl;
  std::cout<<largestTwinPrime(14, 16)<<std::endl;
  return 0;
}

#include <iostream>
using namespace std;

int main(){
  int foo(int a, int b);
  int s = 0;
  cout<<s++;
  cout<<++s;
  cout<<s++<<endl;
  s = 5;
  for(int k = 1; k<3; k++)
    cout<<foo(k,s);
  cout<<'\n';
  return 0;
}

int foo(int s, int t){
  static int x = 0;
  x++;
  t += 2;
  return s*t*x;
}

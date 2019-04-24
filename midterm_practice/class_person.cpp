#include <iostream>

class Person{
public:
  std::string name;
  Person *mom;
  Person *dad;
};

int main(){
  Person father;
  father.dad = nullptr;
  father.mom = nullptr;
  father.name = "Ramazan";
  Person mother;
  mother.dad = nullptr;
  mother.mom = nullptr;
  mother.name = "Ayse";
  Person me;
  me.mom = &mother;
  me.dad = &father;
  me.name = "Nursima";
  std::cout<<me.mom->name<<'\n';
  return 0;
}

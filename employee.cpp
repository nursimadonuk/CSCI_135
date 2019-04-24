#include <iostream>

class Employee{
public:
  std::string name;
  Employee* manager;
};

int main(){
  Employee ceo;
  ceo.name = "rachel";
  ceo.manager = nullptr;
  Employee marketing;
  marketing.name = "monica";
  marketing.manager = &ceo;
  std::cout<< marketing.manager->name<<'\n';
  Employee financial;
  financial.name = "ross";
  financial.manager = &marketing;
  std::cout<< financial.manager->name<<'\n';
  Employee agent;
  agent.name = "joey";
  agent.manager = &financial;
  std::cout<< agent.manager->name<<'\n';
  Employee worker;
  worker.name = "chandler";
  worker.manager = &agent;
  std::cout<< worker.manager->name<<'\n';
  return 0;
}

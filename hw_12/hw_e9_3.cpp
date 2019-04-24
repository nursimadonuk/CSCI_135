#include <iostream>
using namespace std;

class Light {
public:
  int get_first_switch_state();
  int get_second_switch_state();
  int get_lamp_state();

  void toggle_first_switch();
  void toggle_second_switch();
private:
  int first_switch = 0; //down
  int second_switch = 0;
  int lamp = 0; //off
};

int Light::get_first_switch_state() {
  return first_switch;
}

int Light::get_second_switch_state() {
  return second_switch;
}

void Light::toggle_first_switch() {
  if(first_switch == 1) {
    first_switch = 0;
  }else{
    first_switch = 1;
  }
}

void Light::toggle_second_switch() {
  if(second_switch == 1) {
    second_switch = 0;
  }else {
    second_switch = 1;
  }
}

int Light::get_lamp_state() {
  if(first_switch == second_switch) {
    lamp = 0;
  }else {
    lamp = 1;
  }
  return lamp;
}

int main(){
/*  Light hallway;
  cout<< "Enter first switch state (0 for down, 1 for up): ";
  cin>>hallway.first_switch;
  cout<< "Enter second switch state (o for down, 1 for up): ";
  cin>>hallway.second_switch;*/
  return 0;
}

#include <iostream>

enum TimeOfDay {MORNING, AFTERNOON, EVENING, NIGHT};

int main(){
  TimeOfDay now = AFTERNOON;
  switch(now){
    case MORNING:
      std::cout<<"Good morning";
      break;
    case AFTERNOON:
      std::cout<<"Good Afternoon";
      break;
    case EVENING:
      std::cout<<"Good Evening";
      break;
    case NIGHT:
      std::cout<<"Good Night";
      break;
  }
  std::cout<<'\n';
  return 0;
}

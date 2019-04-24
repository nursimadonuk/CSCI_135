#include <iostream>

int main(){
  int curHrs, curMins;
  unsigned int comMins;
  std::cout<<"Please Enter the current hour: ";
  std::cin>>curHrs;
  std::cout<<"Please enter the current minute: ";
  std::cin>>curMins;
  std::cout<<"How many minutes is your commute to class? ";
  std::cin>>comMins;
  int mins = curMins + comMins;
  if(mins < 60){
    std::cout<<"You will get to class at "<<curHrs<<":"<<mins<<std::endl;
  }else if(mins >= 60){
    int hours = mins/60;
    curHrs += hours;
    int remMins = mins%60;
    if(curHrs <= 24){
      std::cout<<"You will arrive to class at "<<curHrs<<":"<<remMins<<std::endl;
    }else{
      int nextDay = curHrs/24;
      int nextHrs = curHrs%24;
      if(nextDay == 1){
        std::cout<<"You will arrive to class tommorrow at "<<nextHrs<<":"<<remMins<<std::endl;
      }else {
        std::cout<<"You will arrive to class "<<nextDay<<" days later at "<<nextHrs<<":"<<remMins<<std::endl;
      }
    }
  }
  return 0;
}

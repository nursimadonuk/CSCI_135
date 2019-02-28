#include <iostream>

int main()
{
  int gallonsInTank; //create variables
  int mpg; //miles per gallon
  int price;
  std::cout <<  "Enter the number of gallons of gas in the tank" << '\n';
  std::cin >> gallonsInTank;  //user inputs a number
  std::cout << "Enter the fuel efficiency in miles per gallon" << '\n';
  std::cin>> mpg;
  std::cout<< "Enter the price of gas per gallon" << '\n';
  std::cin >> price;
  std::cout<< "You will have to pay "<< 100*price/mpg <<" dollars to go 100 miles."<<'\n';
  std::cout<<"You can go "<< gallonsInTank*mpg <<" miles with the gas you have."<< '\n';

  return 0;
}

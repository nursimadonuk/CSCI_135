#include <iostream>
#include <string>
using namespace std;
int main()
{
      string greeting = "Hello, ";
      int number = 0;
      int counter = 0;
      cout << "Please enter an integer: ";
      cin >> number;
      while(counter < number)
      {
            counter = counter + 1;
            cout << greeting;
      }
      cout << "Hello!";
}

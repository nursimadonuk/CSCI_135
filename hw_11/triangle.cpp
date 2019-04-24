#include <iostream>
#include <cmath>

class Point{
public:
  double x,y;
};

class Triangle{
public:
  Point p1;
  Point p2;
  Point p3;
};

double distance(Point point1, Point point2){
  double dif = point2.x - point1.x;
  double dif2 = point2.y - point1.y;
  double s1 = dif * dif;
  double s2 = dif2 * dif2;
  double sum = s1 + s2;
  double result = sqrt(sum);
  return result;
}

double per(Triangle alex){
  double side1 = distance(alex.p1, alex.p2);
  double side2 = distance(alex.p2, alex.p3);
  double side3 = distance(alex.p3, alex.p1);
  double sum = side1 + side2 + side3;
  return sum;
}
int main(){
  Triangle nursima;
  std::cout<<"Enter the coordinates for the first point with space ";
  std::cin>>nursima.p1.x>>nursima.p1.y;
  std::cout<<"Enter the coordinates for the second point with space ";
  std::cin>>nursima.p2.x>>nursima.p2.y;
  std::cout<<"Enter the coordinates for the third point with space ";
  std::cin>>nursima.p3.x>>nursima.p3.y;
  std::cout<<"the perimeter of this triangle will be " << per(nursima)<<'\n';
  return 0;
}

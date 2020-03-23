//
// File: main.cpp
// Last Modified: 20 March 2000
// Topic: Writing Make Files
//

#include <iostream>
#include "Point.h"
#include "Rectangle.h"

int main()
{
  int x, y;

  std::cout << "Please enter x and y value for point p1: ";
  std::cin >> x >> y;

  Point p1(x, y);

  p1.move(3, 5);
  std::cout << "\nMoved p1 by 3, 5--p1 now at "
       << p1.get_x() << ", " << p1.get_y() << std::endl;

  std::cout << "\nWe'll use p1 point for the bottom left point of" << std::endl
       << "rectangle r1, please enter the x and y value for" << std::endl
       << "top right point: ";
  std::cin >> x >> y;

  Point p2(x, y);
  Rectangle r1(p1, p2);
  std::cout << "\nRectangle r1 area is: " << r1.area() << std::endl;

  return 0;
}

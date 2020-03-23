//
// File: Point.h
// Last Modified: 20 March 2020
// Topic: Writing Make Files
//

#ifndef _POINT_H
#define _POINT_H

class Point
{
public:
  Point();
  Point(int xval, int yval);
  void move(int dx, int dy);
  int get_x() const;
  int get_y() const;

private:
  int x, y;
};

#endif

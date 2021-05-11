#include "coordinate.hpp"
#include "rectangle.hpp"

#include <iostream>
#include <string>
using namespace std;


Rectangle::Rectangle(): lb(0,0), rt(0,0), center(0,0), area(0)
{

}
Rectangle::Rectangle(Coordinate lbval, Coordinate rtval) : lb(lbval), rt(rtval)
{

}
Coordinate Rectangle::getLB() const
{
  return lb; 
}
Coordinate Rectangle::getRT() const
{
  return rt; 
}
double Rectangle::getArea()
{
  double xDifference = rt.getX() - lb.getX(); 
  double yDifference = rt.getY() - lb.getY(); 
  double area =xDifference * yDifference; 
  return area; 
}
Coordinate Rectangle::getCenter()
{
  double xCenter = (rt.getX() - lb.getX())/2; 
  double yCenter = (rt.getY() - lb.getY())/2; 
  center.x = xCenter; 
  center.y = yCenter;  
  return center; 

  // MAY BE PROBLEMEATIC 
}
void Rectangle::setLBRT(Coordinate lbval, Coordinate rtval)
{
  lb = lbval; 
  rt = rtval; 
  
  // The area and center value should be set with the new value.
}
void Rectangle::printRectangle() const
{
  // COUT may have a problem 
  cout << "Left bottom: "; 
  lb.printXY(); 
  cout << "Right top: "; 
  rt.printXY(); 
  cout << "Center: "; 
  center.printXY(); 
  cout << "Area: " << area << endl; 
  cout << " " << endl; 
}


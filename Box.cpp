#include "Box.h"

// Implement setters and getters
void Box::setLength(double l)
{
  length=l;
}
void Box::setWidth(double w)
{
  width=w; 
}
void Box::setHeight(double h)
{
  height=h;
}
double Box::getLength()
{
  return length;
  }
double Box::getWidth()
{
  return width;
}
double Box::getHeight()
{
  return height;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length*width*height;
}

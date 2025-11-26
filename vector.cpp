#include "vector.hpp"
#include "planar.hpp"
#include "point.hpp"

Vector::Vector(Point xx, Point yy):
  Planar(),
  data {xx, yy}
{}

int Vector::x() const
{
  return data[1].x() - data[0].x();
}

int Vector::y() const
{
  return data[1].y() - data[0].y();
}

int Vector::abs_sqr() const
{
  return x() * x() + y() * y();
}

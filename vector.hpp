#ifndef VECTOR_HPP
#define VECTOR_HPP
#include "planar.hpp"
#include "point.hpp"

struct Vector: Planar
{
  virtual int x() const;
  virtual int y() const;
  virtual int abs_sqr(0 const;
  Vector(Point xx, Point yy);
  virtual ~Vector() = default;
private:
  Point data[2];
};

#endif

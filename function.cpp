#include <iostream>
#include "funtion.hpp"
#include "poin.hpp"
#include "vector.hpp"

Planar* make(size_t pl)
{
  Planar* r = nullptr;
  switch(id)
  {
    case 0:
      r = new Point(0, 0);
      break;
    default:
      throw std::logic_error("bad id");
  }
  return r;
}

void free_planars(Planar** pls, size_t k)
{
  for (size_t i = 0; i < k; ++i)
  {
    delete pls[i];
  }
}

void draw(Planar* pl)
{
  std::cout << pl->x();
  std::cout << " ";
  std::cout << pl->y() << "\n";
}

Planar* mostLeft(Planar** pls, size_t k)
{
  return nullptr;
}

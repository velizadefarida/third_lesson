#include <iostream>
#include "planar.hpp"
#include "point.hpp"
#include "function.hpp"
#include "vector.hpp"

int main()
{
  size_t s = 0;
  size_t c = 20;
  Planar** pls = new Planar*[c];
  while (std::cin)
  {
    Planar* pl = nullptr;
    try
    {
      pl = make(std::cin);
      if (s == c)
      {
        Planar** epls = new Planar*[c*2];
        for (size_t i = 0; i < s; ++i)
        {
          epls[i] = pls[i];
        }
        delete[] pls;
        pls = epls;
        c *= 2;
      }
      pls[s++] = pl;
    }
    catch(...)
    {
      delete pl;
      free_planars(pls, s);
      delete[] pls;
      return 2;
    }
  }
  if (!std::cin.eof())
  {
    free_planars(pls, s);
    delete[] pls;
    return 3;
  }
}

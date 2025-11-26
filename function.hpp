#ifndef FUNCTION_HPP
#define FUNCTION_HPP
#include "planar.hpp"
#include <iostream>

Planar* make(std::istream& is);
Planar* mostLeft(Planar** pls, size_t k);
Planar* make(size_t pl);
void draw(Planar* pl);
void free_planars(Planar** pls, size_t k);

#endif

#ifndef DYNARRAY_HPP
#define DYNARRAY_HPP

#include <stdexcept>
#include <iostream>

class DynArray {
private:
  int *array;
  unsigned length;
  
public:
  DynArray(unsigned s);
  ~DynArray();

  //Get/set methods
  int get(unsigned i);
  void set(unsigned i, int e);
  unsigned size();
};

//operators
std::ostream& operator<<(std::ostream &os, DynArray &a);

#endif

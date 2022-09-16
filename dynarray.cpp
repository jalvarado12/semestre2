#include "dynarray.hpp"

DynArray::DynArray(unsigned s) {
  length = s;
  array = new int[length];
}

DynArray::~DynArray() {
  delete[] array;
}

int DynArray::get(unsigned i) {
  if(i > length-1){
    throw std::out_of_range("get: index out of bounds.");
  }
  return array[i];
}

void DynArray::set(unsigned i, int e) {
  if(i > length-1){
    throw std::out_of_range("set: index out of bounds.");
  }
  array[i] = e;
}

unsigned DynArray::size() {
  return length;
}

std::ostream& operator<<(std::ostream &os, DynArray &a) {
  os << "(";
  for(int i = 0; i < a.size()-1; i++){
    os << a.get(i) << ", ";
  }
  os << a.get(a.size()-1) << ")";
  return os;
}

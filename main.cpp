#include <iostream>
#include "dynarray.hpp"

int main() {
  DynArray myarray(5);

  for(int i = 0; i < myarray.size(); i++){
    myarray.set(i, i+3);
  }
  
  std::cout << myarray << "\n";

  myarray.get(5);
  
  
  return 0;
}

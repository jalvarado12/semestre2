#include <iostream>
#include "charlist.hpp"

int main() {
  charlist mylist;

  for(char c = 97; c < 102; c++){
    mylist.push_back(c);
    std::cout << mylist.back() << "\n";
  }
  
  mylist.pop_back();
  
  mylist.display();
  
  
  
  return 0;
}


#include "mylisttemp.hpp"


int main(){
  mylist<int> mylist;

  for(int c = 97; c < 102; c++){
    mylist.push_back(c);
    std::cout << mylist.back() << " ";
  }
  std::cout<<"\n";	
  
  mylist.pop_back();
  
  mylist.display();
  
  
  
  return 0;
}

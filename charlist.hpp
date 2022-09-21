#ifndef CHARLIST_HPP
#define CHARLIST_HPP
#include <iostream>
#include <list>

struct Cell{
	char val;
	Cell *next; 
};

class charlist{
private:
	Cell *_back;
	unsigned lenght;
public:
	charlist();
	//~Charlist();
	
	char back();
	void push_back(char s);
	void  pop_back();
	unsigned size();
	bool empty();
	
	void display();
};

#endif

#include "charlist.hpp"

charlist::charlist () {
	lenght=0;
	_back=nullptr;
}


void charlist::push_back (char s) {
	Cell *p = new Cell;
	p->val = s;
	p->next = _back;
	_back = p;
	lenght++;
}

char charlist::back () {
	if(lenght==0)
		throw std::out_of_range("back:back is not posible in a list without elements");
	return _back -> val;
	
}

void charlist::pop_back () {
		Cell *p=_back;
		_back=p->next;
		delete p;
		lenght-=1;
}

unsigned charlist::size () {
	return lenght;
}

bool charlist::empty () { 
	if (lenght == 0)
		return true;
	return false;
}

void charlist::display () {
	Cell *cursor = _back;
	while (cursor != nullptr) {
		std::cout<<cursor->val<<" ";
		cursor=cursor->next;
	}
	std::cout<<"\n ";
}

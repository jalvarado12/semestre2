#ifndef MYLISTTEMP_HPP
#define MYLISTTEMP_HPP

#include <iostream>
#include<stdexcept>

template <typename T>
struct Cell{
	T val;
	Cell<T> *next;
};


template <typename T>
class mylist{
private:
	Cell<T> *_back;
	unsigned lenght;
public:
	mylist ();
	//~mylist ();
	
	void push_back (T s);
	void pop_back ();
	T back ();
	unsigned size ();
	bool empty();
	void display ();			
};

template <typename T>
mylist<T>::mylist(){
	_back=nullptr;
	lenght=0;
}


template <typename T>
void mylist<T>::push_back (T s){
	Cell<T> *p = new Cell<T>;
	p->val = s;
	p->next = _back;
	_back = p;
	lenght++;
}

template <typename T>
T mylist<T>::back () {
	if(lenght==0)
		throw std::out_of_range("back:back is not posible in a list without elements");
	return _back -> val;
}


template <typename T>
void mylist<T>::pop_back () {
	if(lenght==0)
		throw std::out_of_range("back:back is not posible in a list without elements");
	else{
		Cell<T> *p=_back;
		_back=p->next;
		delete p;
		lenght-=1;
	}
}

template <typename T>
unsigned mylist<T>::size () {
	return lenght;	
}

template <typename T>
bool mylist<T>::empty () { 
	if (lenght == 0)
		return true;
	return false;
}

template <typename T>
void mylist<T>::display () {
	Cell<T> *cursor = _back;
	while (cursor != nullptr) {
		std::cout<<cursor->val<<" ";
		cursor=cursor->next;
	}
	std::cout<<"\n ";
}


#endif

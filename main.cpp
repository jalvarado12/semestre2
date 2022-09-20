#include <iostream>
#include "vec3d.hpp"


int main(){
	vector3d myc;
	vector3d david;
	vector3d awa;
	myc[0]=1;
	myc[1]=2;
	myc[2]=3;
	std::cout<<myc<<"\n ";
	david[0]=2;
	david[1]=7;
	david[2]=-3.4;
	std::cout<<david<<"\n ";
	awa=david*5;
	
	std::cout<<awa<<"\n ";
	
	return 0;
}

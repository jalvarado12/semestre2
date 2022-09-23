#include <iostream>
#include <string>

std::string invert(std::string s){
	int lg=s.length();
	if(lg>=1){
		if (lg == 1 )
			return s;
		else{
			
			std::string j;
			j=s[lg-1];
			s.pop_back();
			return j+ invert(s);
		}
	}
	return s;
}


int main(){
	std::string name("");
	std::string j;
	j=invert(name);
	std::cout<<name<<"\n ";
	std::cout<<j<<"\n ";
	
	return 0;
}

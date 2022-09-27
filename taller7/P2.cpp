#include <iostream>
#include <string>
std::string revstr(std::string s){
	if(s.size()<=1) return s;
	else return s[s.size()-1] + revstr(s.substr(0,s.size()-1));
}
int main(){
	std::string s="sever la";
	std::cout<<revstr(s)<<std::endl;
}

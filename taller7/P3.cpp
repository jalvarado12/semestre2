#include <iostream>
#include <string>
bool palstr(std::string s){
	if(s.size()<=1) return true;
	else if(tolower(s[0])==tolower(s[s.size()-1]))return palstr(s.substr(1,s.size()-2));
	else return false;
}
int main(){
	std::string s="Anitalavalatina";
	std::cout<<palstr(s)<<std::endl;
}

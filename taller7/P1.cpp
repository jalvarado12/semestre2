#include <iostream>
unsigned pot(int n, unsigned k){
	if(k==0) return 1;
	else return n*pot(n,k-1);
}
int main(){
	std::cout<<pot(2,4)<<std::endl;
}

#include "LooongLong"
#include <iostream>

int main(){
	std::string str;
	std::cin>>str;
	LooongLong l1(str);

	std::cin>>str;
	LooongLong l2(str);
	if(l1<=l2)
		std::cout<<l1<<" <= "<<l2<<std::endl;
	else
		std::cout<<l2<<" <= "<<l1<<std::endl;
	std::cout<<l1+l2<<std::endl;
		
	return 0;
}
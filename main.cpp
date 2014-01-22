#include<iostream>
#include"add.h"
#include"multiply.h"
#include"pow.h"

int main(){
	std::cout<<power(add(multiply(2,2),4),3)<<std::endl;
	return 0;
}
#include <iostream>
#include <windows.h>

// std namespaces
using std::cout;
using std::cin;
using std::endl;

// Function Prototype
int factorial ( int );

int main(){
	
	return 0;
}

int factorial ( int value ){
	
	if( value <= 1){
		return 1;
	}
	else{
		return value * factorial(value - 1);
	}
}

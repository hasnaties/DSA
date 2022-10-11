#include <iostream>
#include <windows.h>

// std namespaces
using std::cout;
using std::cin;
using std::endl;

//class stack
class stack{
	
	private:
		int index;
		int array[ 100 ];
	
	public:
	
	stack(){
		this->index = 0;
	}
	
	int getIndex();
	int updateIndex();
	int push( int data );
};

int main(){
	
	stack obj = stack();
	cout<<obj.getIndex();
	
	return 0;
}

// Definations
int stack::getIndex(){
		return this->index;
}

int stack::updateIndex(){
		this->index = this->index + 1;
		return this->index;
}

int stack::push( int data ){
	
}


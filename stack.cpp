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
	
	// Method Prototypes
	bool isFull();
	bool isEmpty();
	bool push( int );
	bool pop( int );
	int peak ( int );
	void display();
	void binary ( int );
};

int main(){
	
	
	return 0;
}

// Definations

// 1. Is array full?
bool stack::isFull(){
	
	if(this->index <= 100){
		return true;
	}
	return false;
}

// 2. Is array empty?
bool stack::isEmpty(){
	
	if(this->index <= 0 ){
		return true;
	}
	return false;
}

// 3. Push into the Array
bool stack::push( int data ){
	
	if(isFull()){
		return false;
	}
	else{
		
		this->array[this->index] = data;
		this->index = this->index + 1;
		return true;
	}
}

// 4. pop item from the Array
bool stack::pop( int data ){
	
	if(isEmpty()){
		return false;
	}
	else{
		
		this->array[this->index] = data;
		this->index = this->index - 1;
		return true;
	}
}

// 5. Peak using index
int stack::peak( int index ){
	
	if(isEmpty()){
		return 0;
	}
	else{
		
		return this->array[ index ];
	}
}

// 6. Display the Array
void stack::display(){
	
	if(isEmpty()){
		cout<<"List is empty!";
	}
	else{
		
		for(int i=0; i < index ; i++){
			
			cout<<this->array[i]<<endl;
		}
	}
}

// 7. Binary expression
void stack::binary(  int value ){
	
	if(isFull()){
		return;
	}
	else{
		
		while( value > 0 ){
			
			int rem = value % 2;
			value = value/2;
			
			this->push(rem);
		}
	}
}

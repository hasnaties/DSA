#include <iostream>
#include <windows.h>

// std namespaces
using std::cout;
using std::cin;
using std::endl;

//class stack
class DynamicArray{
	
	private:
		int index;
		int array[ 100 ];
	
	public:
	
	DynamicArray(){
		this->index = 0;
	}
	
	int insert( int );
	bool multiply ();
	int distance (int, int);
	void traverse();
	
};

int main(){
	
	// Question #1
	int array1[5] = {5,6,4,8,12};
	
	DynamicArray obj1 = DynamicArray();
	for(int i=0; i < 5; i++){
		obj1.insert(array1[i]);
	}
	
	cout<<"\n -- Answer #1 -- \n"<<endl;
	obj1.multiply();
	obj1.traverse();
	
	// Question #2
	int array2[8] = {2,5,3,5,4,8,10,3};
	
	DynamicArray obj2 = DynamicArray();
	for(int i=0; i < 8; i++){
		obj2.insert(array2[i]);
	}
	
	cout<<"\n -- Answer #2 -- \n"<<endl;
	cout<<"Distance between both index is: "<<obj2.distance(2, 10);
	
	return 0;
}

// DynamicArray::Definations

// 1. inserts values in Array
int DynamicArray :: insert( int value ){
	
	this->array[ this->index ] = value;
	this->index = this->index + 1;
	
	return this->index;
}

// 2. Display the array
void DynamicArray :: traverse(){
	
	for(int i=0; i < this->index; i++){
	
		cout<<this->array[i]<<endl;
	}

}

// 3. Multiplication of previous and next
bool DynamicArray :: multiply (){
	
	for(int i=0; i < this->index; i++){
		
		if(i==0){
			this->array[i] = this->array[i] * this->array[i+1];
			continue;
		}
		
		
		if(i == this->index ){
			this->array[i] = this->array[i] * this->array[i-1];
			break;
		}
		
		
		this->array[i] = this->array[i+1] * (this->array[i] * this->array[i-1]);
	}
	
	return true;
}

// 4. distance between two index
int DynamicArray :: distance (int a, int b){
	
	int index1, index2;
	
	for(int i=0; i < this->index; i++){
		
		if(this->array[i] == a){
			index1 = i;
			break;
		}
		continue;
	}
	
	for(int i=0; i < this->index; i++){
		
		if(this->array[i] == b){
			index2 = i;
			break;
		}
		continue;
	}

	return index2 - index1;
}

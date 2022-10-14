#include <iostream>
#include <windows.h>

// std namespaces
using std::cout;
using std::cin;
using std::endl;

// node structure
struct node {

	int data;
	node *next;
};

// Head of the List
node *head = NULL;

// Head of the List
node *end = NULL;

// prototypes
int insert ( int );
int insertAtStart ( int );
int insertAtEnd ( int );
bool deletion ( int );
bool deleteFromStart ();
bool deleteFromEnd ();
void update ( int, int );
void display ();
void reverse ();

void SLL ();
void sllInsertion ();
void sllDelete ();

// Main_Function
int main() {

	return 0;
}

// Function Definations
void SLL (){
	
	cout<<"\n\t\t ** -- Linked_List Menu -- ** "<<endl;
	
	system("CLS");
	
	cout<<"\n\t Press 1: For creation of Node ";
	cout<<"\n\t Press 2: For Traversing LL ";
	cout<<"\n\t Press 3: For Node Insertion ";
	
	cout<<endl;
	
	cout<<"\n\t Press 4: To delete a Node ";
	
	cout<<endl;
	
	cout<<"\n\t Press 5: To reverse the LL ";
	cout<<"\n\t Press 6: To Display all nodes value of LL ";
	
	cout<<endl;
	
	cout<<"\n\t Press 7: Go to main menu ";
	cout<<"\n\t Press 8: Exit program ";
	
	cout<<"\n\n\t Select here: ";
	int opt = 0;
	cin>>opt;
	
	switch( opt ){
	
		case 1:
			int input;
			
			while(input != 0){
				system("CLS");
				cout<<"\n\n\t --Enter 0 to quit-- ";
				
				cout<<"\n\t Enter the data: ";
				cin>>input;
				insert(input);
			}
			
			break;
				
		case 2:
			display();
			break;
			
		case 3:
			cout<<"working3";
			break;
	}
}

void sllInsertion (){

	system("CLS");
	cout<<" \n\t 1-	For insertion at beginning ";
	cout<<" \n\t 2-	For insertion in between ";
	cout<<" \n\t 3-	Insertion at end ";
	
	cout<<"\n\n\t Select here: ";
	int opt = 0;
	cin>>opt;
	
	switch( opt ){
	
		case 1:
			cout<<"working1";
			break;
			
		case 2:
			cout<<"working2";
			break;
			
		case 3:
			cout<<"working3";
			break;
	}
}

void sllDelete (){

	system("CLS");
	cout<<" \n\t 1-	For deletion at beginning ";
	cout<<" \n\t 2-	For deletion in between ";
	cout<<" \n\t 3-	deletion at end ";
	
	cout<<"\n\n\t Select here: ";
	int opt = 0;
	cin>>opt;
	
	switch( opt ){
	
		case 1:
			cout<<"working1";
			break;
			
		case 2:
			cout<<"working2";
			break;
			
		case 3:
			cout<<"working3";
			break;
	}
}

// 1. Insert
int insert ( int data ){
	
	node *obj = new node;
	obj->data = data;
	
	if( head == NULL ){
	
		head = obj;
		end = obj;
	}
	else{
		
		end->next = obj;
		end = obj;
	}
	end->next = head;
	
	return obj->data;
}

// 1.2 Insert at the start
int insertAtStart ( int data ){
	
	node *obj = new node;
	obj->data = data;
	
	if( head == NULL ){
	
		head = obj;
		end = obj;
	}
	else{

		obj->next = head;
		head = obj;
	}
	
	return obj->data;
}

// 1.3 Insert at the end
int insertAtEnd ( int data ){
	
	node *obj = new node;
	obj->data = data;
	
	if( head == NULL ){
	
		head = obj;
		end = obj;
	}
	else{
		
		end->next = obj;
		end = obj;
	}
	end->next = head;
	
	return obj->data;
}

// 2. Delete
bool deletion ( int key ){
	
	node *temp;
	temp = head;
	
	while( temp != end ){
		
		if ( temp->next->data == key){
			break;
		}
		temp = temp->next;
	}
	
	if ( temp->next->data != key){
		
		delete temp;
		return false;
	}
	else{
	
		node *temp2;
		temp2 = temp->next;
		
		temp->next = temp2->next;
		
		delete (temp2);
		return true;
	}
}

// 2.2 Delete from start
bool deleteFromStart (){
	
	if(head == NULL){
		return false;
	}
	else{
		node *temp;
		temp = head->next;
		
		head = temp;
		delete (temp);	
		
		return true;
	}
}

// 2.3 Delete from the end
bool deleteFromEnd (){
	
	if(head == NULL){
		return false;
	}
	else{
	
	node *end, *prev;
	end = head;
	
	while( temp != end ){
	
		end = end->next;
		prev = end;
	}
	
		prev->next = NULL;
		delete(end);
		
		return true;
	}
}

// 3. Search
void update ( int prevData, int newData ){
	
	node *temp;
	temp = head;
	
	while( temp != end ){
		
		if ( temp->data == prevData){
			break;
		}
		temp = temp->next;
	}

	
	if ( temp->data == prevData ){
		
		temp->data = newData;
		cout<<" Data Updated.";
	}
	else{
		cout<<" No match found.";
	}
	
	delete (temp);
}

// 4. Display
void display (){
	
	node *temp;
	temp = head;

	while( temp != end ){
		
		cout<<temp->data<<endl;
		temp = temp->next;
	}

	delete temp;
}

void reverse(){
	
	node *temp;
	temp = head;
	
	head = end;
	end = temp;
	
	delete (temp);
}

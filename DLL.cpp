#include <iostream>
#include <windows.h>

// std namespaces
using std::cout;
using std::cin;
using std::endl;

// node structure
struct node
{
	int data;
	node *prev;
	node *next;
}; 

class Doubly_Linked_List
{
	node *head;
	node *end;
	
	public:
	Doubly_Linked_List()
	{
		head = NULL;
		end = NULL;
	}
	
	// prototypes
	void insertB( int );
	void insertE( int );
	void deletion (node*);
	void display ();
	void search ( int );
	void reverse(node **head_ref);
};

void SLL ();
void sllInsertion ();
void sllDelete ();

// Main_Function
int main() {

	return 0;
}

// Function Definations
void DLL (){
	
	cout<<"\n\t\t ** -- Linked_List Menu -- ** "<<endl;
	
	system("CLS");
	
	cout<<"\n\t Press 1: For creation of node ";
	cout<<"\n\t Press 2: For Traversing LL ";
	cout<<"\n\t Press 3: For node Insertion ";
	
	cout<<endl;
	
	cout<<"\n\t Press 4: To delete a node ";
	
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
				//insertB(input);
			}
			
			break;
				
		case 2:
			//display();
			break;
			
		case 3:
			cout<<"working3";
			break;
	}
}

void DllInsertion (){

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

void DllDelete (){

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

// 1. Insert-A
void Doubly_Linked_List :: insertB(int d)
{
	// Creating new node
	node *temp;
	temp = new node();
	temp->data = d;
	temp->prev = NULL;
	temp->next = head;

	// List is empty
	if(head == NULL)
		end = temp;
		
	else
		head->prev = temp;
		
	head = temp;
}

// Insert-B
void Doubly_Linked_List :: insertE(int d)
{
	// create new node
	node *temp;
	temp = new node();
	temp->data = d;
	temp->prev = end;
	temp->next = NULL;

	// if list is empty
	if(end == NULL)
		head = temp;
	else
		end->next = temp;	
	end = temp;
}

// 2. Delete
void Doubly_Linked_List :: deletion(node *n)
{	
	// if node to be deleted is first node of list
	if(n->prev == NULL)
	{
		head = n->next; //the next node will be head of list
		head->prev = NULL;
	}
	// if node to be deleted is last node of list
	else if(n->next == NULL)
	{
		end = n->prev;   // the previous node will be last of list
		end->next = NULL;
	}
	else
	{
		//previous node's next will point to current node's next
		n->prev->next = n->next;
		//next node's prev will point to current node's prev
		n->next->prev = n->prev;
	}
	//delete node
	delete(n);			
}

// 3. Search
void Doubly_Linked_List :: search ( int data ){
	
	node *temp;
	temp = head;
	
	while( temp->next != NULL ){
		
		//cout<<endl<<temp->data<<endl;
		
		if ( temp->data == data){
			break;
		}
		temp = temp->next;
	}

	
	if ( temp->data == data ){
		
		cout<<" Match found.";
	}
	else{
		cout<<" No match found.";
	}
	
	delete (temp);
}

// 5. Display
void Doubly_Linked_List :: display()
{
	node *trav;
	trav = head;
	while(trav != NULL)
	{
		cout<<trav->data<<endl;
		trav = trav->next;
	}
}

// 6. Reverse
void Doubly_Linked_List :: reverse(node **head_ref)  
{  
    node *temp = NULL;  
    node *current = *head_ref;  
      
    /* swap next and prev for all nodes of  
    doubly linked list */
    while (current != NULL)  
    {  
        temp = current->prev;  
        current->prev = current->next;  
        current->next = temp;              
        current = current->prev;  
    }  
      
    /* Before changing head, check for the cases like empty  
        list and list with only one node */
    if(temp != NULL )  
        *head_ref = temp->prev;  
}  

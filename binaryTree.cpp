#include <iostream>
#include <windows.h>

// std namespaces
using std::cout;
using std::cin;
using std::endl;

// node structure
struct node {

	int data;
	struct node *right;
	struct node *left;
};

// root of the tree
struct node *root = NULL;


// Functions

// -- Insert --
void insert ( int data ){

	struct node *tempNode = (struct node*) malloc(sizeof(struct node));
	struct node *current;
   	struct node *parent;

	tempNode->data = data;
	tempNode->left = NULL;
	tempNode->right = NULL;
	
	if(root == NULL){
		
		root = tempNode;
//		cout<<"root:"<<root->data;
	}
	else{
	
   		current = root;
		parent = NULL;
   		
		while(1){
			
			parent = current;
			
			if( data < parent->data ){
				
				current = parent->left;
				if( current == NULL){
					
					parent->left = tempNode;
//					cout<<"left:"<<parent->left->data;
					return;
				}
			}
			else{
			
				current = parent->right;
				
				if( current == NULL){
					
					parent->right = tempNode;
//					cout<<"right:"<<parent->right->data;
					return;
				}
			}
		}
	}
}

// -- InOrder Display --
void inOrder (struct node *root){

	if( root != NULL){
		
		cout<<"->"<<root->data;
		inOrder(root->left);
		inOrder(root->right);
	}
}

// Main-Function
int main(){
	
	insert(2);
	insert(3);
	insert(1);

	inOrder(root);
	
	return 0;
}

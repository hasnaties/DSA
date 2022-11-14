#include <iostream>
#include <windows.h>

// std namespaces
using std::cout;
using std::cin;
using std::endl;

// node structure
struct node {

	node *right;
	int data;
	node *left;
};

// root of the tree
node *root = NULL;

// Proto-types
int insert ( int );

// Main-Function
int main(){
	
	return 0;
}

// Definations
int insert ( int data ){
	
	if(root == NULL){
		
		root->right = root->left = NULL;
		return root->data = data;
	}
	
	
}

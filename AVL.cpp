#include <iostream>

// AVL-struct
class Node{
	
	public:
	int data;
	Node *right, *left;
	int height;
};

// create-New Node
Node *newNode ( int data ){
	
	Node *node = new Node();
	
	node->data = data;
	node->left = node->right = NULL;
	node->height = 1;
	
	return (node);
}

Node *root = NULL;

//Get Node's height
int height ( Node *n ){

	if( n == NULL ){
		return 0;
	}
	
	return n->height;
}

// get-Maximum
int max ( int a, int b){
	return (a > b) ? a:b;
}

//Get Balance-Factor
int getBalFactor ( Node *n){
	
	if( n == NULL ){
		return 0;
	}
	return ( height( n->left ) - height( n->right ));
}

Node *rightRotate( Node *n ){
	
	
}

//Insert
Node * insert ( Node *root, int data ){

	// Insert the data at
	// suitable node
	
	if( root == NULL ){
		
		return (newNode( data ))
	}
	else if( data < root->data ){
		
		node->left = insert( node->left, data );
	}
	else if( data > root->data ){
		
		node->right = insert( node->right, data );
	}
	else{
		
		return (root);
	}
	
	//update node's height
	node->height = max( height( root->left ), height( root->right ));
	
	//get Balance factor 
	//for the node
	int balFactor = getBalFactor ( root );
	
	//Check and Do rotations
	if(balFactor > 1){
		
		if( data < root->left->data ){
			
			return 
		}
	}
	
}
// Main-Function
int main (){
	
	return 0;
}

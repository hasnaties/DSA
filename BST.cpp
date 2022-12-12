#include <iostream>
#include <windows.h>
using namespace std;

// tree-struct
struct Node{
	
	int data;
	Node *left;
	Node *right;
};

// root of the Tree
Node *root = NULL;

// --Insert--
void insert( int data ){

	struct Node *temp = new Node();
	
	temp->data = data;
	temp->left = temp->right = NULL;
	
	if( root == NULL ){
	
		root = temp;
		return;
	}
	
	struct Node *parent;
	struct Node *current;
	
	current = root;
	
	while(1){
		
		parent = current;
		
		if( data < parent->data ){
			
			current = parent->left;
			
			if( current == NULL ){
				
				parent->left = temp;
				return;
			}
		}
		else{
			
			current = parent->right;
			
			if( current == NULL ){
				
				parent->right = temp;
				return;
			}
		}
	}
}

// Traverse-Tree
void printTree ( Node *root ){
	
	if( root != NULL ){
		
		cout<<endl<<root->data;
		printTree( root->left );
		printTree( root->right );
	}
}

void preOrder ( Node *root ){
	
	if( root != NULL ){
		
		cout<<endl<<root->data;
		preOrder( root->left );
		preOrder( root->right );
	}
}

void inOrder ( Node *root ){
	
	if( root != NULL ){
		
		inOrder( root->left );
		cout<<endl<<root->data;
		inOrder( root->right );
	}
}

void postOrder ( Node *root ){
	
	if( root != NULL ){
		
		postOrder( root->left );
		postOrder( root->right );
		cout<<endl<<root->data;
	}
}

//search
void search ( int n ){
	
	if ( root == NULL ){
		
		return;
	}
	
	struct Node *current;
	struct Node *parent;
	current = root;
	
	while( current->data != n ){
		
		if( n > current->data ){
			
			current = current->right;
		}
		else{
			current = current->left;
		}
	}
	
	
	if( current != NULL ){
		
		cout<<" MATCH FOUND! ";
		return;
	}
}

// maximum-data
int max(){
	
	if( root == NULL ){
		return 0;
	}
	
	struct Node *current;
	current = root;
	
	while ( current->right != NULL){
		current = current->right;
	}
	
	return current->data;
}

// minimum-data
int min(){
	
	if( root == NULL ){
		return 0;
	}
	
	struct Node *current;
	current = root;
	
	while ( current->left != NULL){
		current = current->left;
	}
	
	return current->data;
}

// tree-depth
int depth ( Node *root ){
	
	if( root == NULL ){
		return 0;
	}
	
	int leftDepth = depth(root->left);
	int rightDepth = depth(root->right);
	
	if( leftDepth > rightDepth ){
		return (leftDepth + 1);
	}
	else{
		return (rightDepth + 1);
	}
}

// tree-height
int findHeight(Node* root){

  if(root == NULL)
    return 0;

  return findMax(findHeight(root->left), findHeight(root->right)) + 1;
}

//Main-Function
int main(){

	insert(3);
	insert(2);
	insert(9);
	insert(15);
	insert(7);
	
	//inOrder( root );
	cout<<depth (root);
}

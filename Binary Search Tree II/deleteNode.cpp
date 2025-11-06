#include <iostream>
using namespace std;
 
struct Node {
	int data;
	Node* left;
	Node* right;
};
 
Node* findMin(Node* root) {
	while(root->left != NULL)
    	root = root->left;
	return root;
}
 
Node* deleteNode(Node* root, int key) {
	if(root == NULL) return root;
	if(key < root->data)
    	root->left = deleteNode(root->left, key);
	else if(key > root->data)
    	root->right = deleteNode(root->right, key);
	else {
    	if(root->left == NULL) {
        	Node* temp = root->right;
        	delete root;
        	return temp;
    	} else if(root->right == NULL) {
        	Node* temp = root->left;
        	delete root;
        	return temp;
    	}
    	Node* temp = findMin(root->right);
    	root->data = temp->data;
    	root->right = deleteNode(root->right, temp->data);
	}
	return root;
}
 
void inorder(Node* root) {
	if(root == NULL) return;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}
 
int main() {
	Node* root = new Node();
	root->data = 8;
	root->left = new Node();
	root->left->data = 3;
	root->right = new Node();
	root->right->data = 10;
	root = deleteNode(root, 3);
	inorder(root);
	return 0;
}

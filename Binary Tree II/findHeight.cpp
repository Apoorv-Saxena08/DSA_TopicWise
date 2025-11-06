#include <iostream>
using namespace std;
 
struct Node {
	int data;
	Node* left;
	Node* right;
};
 
int height(Node* root) {
	if(root == NULL)
    	return 0;
	return 1 + max(height(root->left), height(root->right));
}
 
int main() {
	Node* root = new Node();
	root->data = 1;
	root->left = new Node();
	root->right = new Node();
	root->left->data = 2;
	root->right->data = 3;
	cout << "Height: " << height(root);
	return 0;
}

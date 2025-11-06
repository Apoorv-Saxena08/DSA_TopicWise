#include <iostream>
using namespace std;
 
struct Node {
	int data;
	Node* left;
	Node* right;
};
 
int findMin(Node* root) {
	while(root->left != NULL)
    	root = root->left;
	return root->data;
}
 
int findMax(Node* root) {
	while(root->right != NULL)
    	root = root->right;
	return root->data;
}
 
int main() {
	Node* root = new Node();
	root->data = 10;
	root->left = new Node();
	root->left->data = 5;
	root->right = new Node();
	root->right->data = 15;
	cout << "Min: " << findMin(root) << " Max: " << findMax(root);
	return 0;
}

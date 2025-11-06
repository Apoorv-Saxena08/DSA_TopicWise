#include <iostream>
using namespace std;
 
struct Node {
	int data;
	Node* left;
	Node* right;
};
 
bool isBST(Node* root, int minVal, int maxVal) {
	if(root == NULL) return true;
	if(root->data <= minVal || root->data >= maxVal)
    	return false;
	return isBST(root->left, minVal, root->data) && isBST(root->right, root->data, maxVal);
}
 
int main() {
	Node* root = new Node();
	root->data = 10;
	root->left = new Node();
	root->left->data = 5;
	root->right = new Node();
	root->right->data = 15;
	cout << (isBST(root, -1e9, 1e9) ? "BST" : "Not BST");
	return 0;
}

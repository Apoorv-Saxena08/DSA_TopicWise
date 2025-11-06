#include <iostream>
using namespace std;
 
struct Node {
	int data;
	Node* left;
	Node* right;
};
 
Node* LCA(Node* root, int n1, int n2) {
	if(root == NULL) return NULL;
	if(root->data == n1 || root->data == n2)
    	return root;
	Node* left = LCA(root->left, n1, n2);
	Node* right = LCA(root->right, n1, n2);
	if(left && right) return root;
	return (left != NULL) ? left : right;
}
 
int main() {
	Node* root = new Node();
	root->data = 1;
	root->left = new Node();
	root->right = new Node();
	root->left->data = 2;
	root->right->data = 3;
	root->left->left = new Node();
	root->left->left->data = 4;
	cout << "LCA: " << LCA(root, 4, 3)->data;
	return 0;
}

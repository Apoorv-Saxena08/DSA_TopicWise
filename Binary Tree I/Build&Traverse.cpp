#include <iostream>
using namespace std;
 
struct Node {
	int data;
	Node* left;
	Node* right;
};
 
Node* newNode(int val) {
	Node* node = new Node();
	node->data = val;
	node->left = node->right = NULL;
	return node;
}
 
void inorder(Node* root) {
	if(root == NULL) return;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}
 
int main() {
	Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
 
	inorder(root);
	return 0;
}

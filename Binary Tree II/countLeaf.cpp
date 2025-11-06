#include <iostream>
using namespace std;
 
struct Node {
	int data;
	Node* left;
	Node* right;
};
 
int countLeaves(Node* root) {
	if(root == NULL) return 0;
	if(root->left == NULL && root->right == NULL)
    	return 1;
	return countLeaves(root->left) + countLeaves(root->right);
}
 
int main() {
	Node* root = new Node();
	root->data = 1;
	root->left = new Node();
	root->right = new Node();
	root->left->data = 2;
	root->right->data = 3;
	cout << "Leaf Nodes: " << countLeaves(root);
	return 0;
}

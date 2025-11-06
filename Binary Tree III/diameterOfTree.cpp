#include <iostream>
using namespace std;
 
struct Node {
	int data;
	Node* left;
	Node* right;
};
 
int height(Node* root) {
	if(root == NULL) return 0;
	return 1 + max(height(root->left), height(root->right));
}
 
int diameter(Node* root) {
	if(root == NULL) return 0;
	int lh = height(root->left);
	int rh = height(root->right);
	int curr = lh + rh + 1;
	int leftD = diameter(root->left);
	int rightD = diameter(root->right);
	return max(curr, max(leftD, rightD));
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
	cout << "Diameter: " << diameter(root);
	return 0;
}

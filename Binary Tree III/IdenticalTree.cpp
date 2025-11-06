#include <iostream>
using namespace std;
 
struct Node {
	int data;
	Node* left;
	Node* right;
};
 
bool isIdentical(Node* a, Node* b) {
	if(a == NULL && b == NULL)
    	return true;
	if(a == NULL || b == NULL)
    	return false;
	return (a->data == b->data) && isIdentical(a->left, b->left) && isIdentical(a->right, b->right);
}
 
int main() {
	Node* root1 = new Node();
	Node* root2 = new Node();
	root1->data = 1; root2->data = 1;
	root1->left = new Node(); root2->left = new Node();
	root1->left->data = 2; root2->left->data = 2;
	root1->right = new Node(); root2->right = new Node();
	root1->right->data = 3; root2->right->data = 3;
	cout << (isIdentical(root1, root2) ? "Identical" : "Not Identical");
	return 0;
}

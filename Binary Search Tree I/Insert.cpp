#include <iostream>
using namespace std;
 
struct Node {
	int data;
	Node* left;
	Node* right;
};
 
Node* insert(Node* root, int val) {
	if(root == NULL) {
    	Node* temp = new Node();
    	temp->data = val;
    	temp->left = temp->right = NULL;
    	return temp;
	}
	if(val < root->data)
    	root->left = insert(root->left, val);
	else
    	root->right = insert(root->right, val);
	return root;
}
 
bool search(Node* root, int key) {
	if(root == NULL) return false;
	if(root->data == key) return true;
	if(key < root->data) return search(root->left, key);
	return search(root->right, key);
}
 
int main() {
	Node* root = NULL;
	int n, val;
	cin >> n;
	for(int i = 0; i < n; i++) {
    	cin >> val;
    	root = insert(root, val);
	}
	int key;
	cin >> key;
	cout << (search(root, key) ? "Found" : "Not Found");
	return 0;
}

#include <iostream>
#include <queue>
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
 
void levelOrder(Node* root) {
	if(root == NULL) return;
	queue<Node*> q;
	q.push(root);
	while(!q.empty()) {
    	Node* curr = q.front();
    	q.pop();
    	cout << curr->data << " ";
    	if(curr->left) q.push(curr->left);
    	if(curr->right) q.push(curr->right);
	}
}
 
int main() {
	Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->right->right = newNode(5);
	levelOrder(root);
	return 0;
}

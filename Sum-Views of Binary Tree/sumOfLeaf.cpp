#include <iostream>
using namespace std;
struct Node{ int data; Node* left; Node* right;};
int sumLeaves(Node* root){
	if(!root) return 0;
	if(!root->left && !root->right) return root->data;
	return sumLeaves(root->left)+sumLeaves(root->right);
}

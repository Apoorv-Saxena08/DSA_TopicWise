#include <iostream>
using namespace std;
 
struct Node {
	int data;
	Node* next;
};
 
Node* merge(Node* left, Node* right) {
	if(!left) return right;
	if(!right) return left;
 
	Node* result = NULL;
	if(left->data <= right->data) {
    	result = left;
    	result->next = merge(left->next, right);
	} else {
    	result = right;
    	result->next = merge(left, right->next);
	}
	return result;
}
 
Node* findMid(Node* head) {
	if(head == NULL || head->next == NULL)
    	return head;
	Node* slow = head;
	Node* fast = head->next;
	while(fast != NULL && fast->next != NULL) {
    	slow = slow->next;
    	fast = fast->next->next;
	}
	return slow;
}
 
Node* mergeSort(Node* head) {
	if(head == NULL || head->next == NULL)
    	return head;
	Node* mid = findMid(head);
	Node* right = mid->next;
	mid->next = NULL;
	Node* left = head;
 
	left = mergeSort(left);
	right = mergeSort(right);
 
	return merge(left, right);
}
 
void printList(Node* head) {
	while(head != NULL) {
    	cout << head->data << " ";
    	head = head->next;
	}
}
 
int main() {
	Node* head = NULL;
	int n, data;
	cin >> n;
	for(int i = 0; i < n; i++) {
    	cin >> data;
    	Node* newNode = new Node();
    	newNode->data = data;
    	newNode->next = head;
    	head = newNode;
	}
 
	head = mergeSort(head);
	printList(head);
	return 0;
}

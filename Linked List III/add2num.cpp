#include <iostream>
using namespace std;
 
struct Node {
	int data;
	Node* next;
};
 
Node* reverse(Node* head) {
	Node* prev = NULL;
	Node* curr = head;
	while(curr != NULL) {
    	Node* next = curr->next;
    	curr->next = prev;
    	prev = curr;
    	curr = next;
	}
	return prev;
}
 
Node* addTwoLists(Node* l1, Node* l2) {
	l1 = reverse(l1);
	l2 = reverse(l2);
	Node* result = NULL;
	Node* tail = NULL;
	int carry = 0;
 
	while(l1 != NULL || l2 != NULL || carry) {
    	int sum = carry;
    	if(l1 != NULL) {
        	sum += l1->data;
        	l1 = l1->next;
    	}
    	if(l2 != NULL) {
        	sum += l2->data;
        	l2 = l2->next;
    	}
    	carry = sum / 10;
    	Node* newNode = new Node();
    	newNode->data = sum % 10;
    	newNode->next = NULL;
 
    	if(result == NULL)
        	result = tail = newNode;
    	else {
        	tail->next = newNode;
        	tail = newNode;
    	}
	}
	return reverse(result);
}
 
void printList(Node* head) {
	while(head != NULL) {
    	cout << head->data << " ";
    	head = head->next;
	}
}
 
int main() {
	int n1, n2, data;
	cin >> n1;
	Node* l1 = NULL;
	for(int i = 0; i < n1; i++) {
    	cin >> data;
    	Node* newNode = new Node();
    	newNode->data = data;
    	newNode->next = l1;
    	l1 = newNode;
	}
 
	cin >> n2;
	Node* l2 = NULL;
	for(int i = 0; i < n2; i++) {
    	cin >> data;
    	Node* newNode = new Node();
    	newNode->data = data;
    	newNode->next = l2;
    	l2 = newNode;
	}
 
	Node* result = addTwoLists(l1, l2);
	printList(result);
	return 0;
}

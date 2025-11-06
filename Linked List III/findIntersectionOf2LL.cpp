#include <iostream>
using namespace std;
 
struct Node {
	int data;
	Node* next;
};
 
int getLength(Node* head) {
	int len = 0;
	while(head != NULL) {
    	len++;
    	head = head->next;
	}
	return len;
}
 
int getIntersection(Node* head1, Node* head2) {
	int len1 = getLength(head1);
	int len2 = getLength(head2);
	int diff = abs(len1 - len2);
 
	if(len1 > len2) {
    	for(int i = 0; i < diff; i++)
        	head1 = head1->next;
	} else {
    	for(int i = 0; i < diff; i++)
        	head2 = head2->next;
	}
 
	while(head1 != NULL && head2 != NULL) {
    	if(head1 == head2)
        	return head1->data;
    	head1 = head1->next;
    	head2 = head2->next;
	}
	return -1;
}
 
int main() {
	Node* head1 = new Node();
	Node* head2 = new Node();
	head1->data = 10;
	head2->data = 3;
 
	Node* newNode = new Node();
	newNode->data = 6;
	newNode->next = NULL;
 
	head1->next = newNode;
	head2->next = newNode;
 
	cout << "Intersection point: " << getIntersection(head1, head2);
	return 0;
}

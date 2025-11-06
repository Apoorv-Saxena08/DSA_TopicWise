#include <iostream>
using namespace std;
 
struct Queue {
	int arr[100];
	int front, rear, size;
};
 
void init(Queue &q, int n) {
	q.front = 0;
	q.rear = -1;
	q.size = n;
}
 
bool isEmpty(Queue &q) {
	return q.front > q.rear;
}
 
bool isFull(Queue &q) {
	return q.rear == q.size - 1;
}
 
void enqueue(Queue &q, int val) {
	if(isFull(q)) {
    	cout << "Overflow";
    	return;
	}
	q.arr[++q.rear] = val;
}
 
void dequeue(Queue &q) {
	if(isEmpty(q)) {
    	cout << "Underflow";
    	return;
	}
	q.front++;
}
 
int frontElement(Queue &q) {
	if(isEmpty(q))
    	return -1;
	return q.arr[q.front];
}
 
int main() {
	Queue q;
	int n;
	cin >> n;
	init(q, n);
	for(int i = 0; i < n; i++) {
    	int x;
    	cin >> x;
    	enqueue(q, x);
	}
	dequeue(q);
	cout << "Front: " << frontElement(q);
	return 0;
}

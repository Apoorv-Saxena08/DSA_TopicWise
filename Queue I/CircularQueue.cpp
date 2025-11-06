#include <iostream>
using namespace std;
 
struct CircularQueue {
	int arr[100];
	int front, rear, size;
};
 
void init(CircularQueue &q, int n) {
	q.front = q.rear = -1;
	q.size = n;
}
 
bool isFull(CircularQueue &q) {
	return (q.front == 0 && q.rear == q.size - 1) || (q.rear + 1 == q.front);
}
 
bool isEmpty(CircularQueue &q) {
	return q.front == -1;
}
 
void enqueue(CircularQueue &q, int val) {
	if(isFull(q)) return;
	if(isEmpty(q)) q.front = 0;
	q.rear = (q.rear + 1) % q.size;
	q.arr[q.rear] = val;
}
 
void dequeue(CircularQueue &q) {
	if(isEmpty(q)) return;
	if(q.front == q.rear)
    	q.front = q.rear = -1;
	else
    	q.front = (q.front + 1) % q.size;
}
 
int main() {
	CircularQueue q;
	int n;
	cin >> n;
	init(q, n);
	for(int i = 0; i < n; i++) {
    	int val;
    	cin >> val;
    	enqueue(q, val);
	}
	dequeue(q);
	return 0;
}

#include <iostream>
using namespace std;
 
struct Stack {
	int arr[100];
	int top;
	int size;
};
 
void init(Stack &s, int n) {
	s.size = n;
	s.top = -1;
}
 
bool isEmpty(Stack &s) {
	return s.top == -1;
}
 
bool isFull(Stack &s) {
	return s.top == s.size - 1;
}
 
void push(Stack &s, int val) {
	if(isFull(s)) {
    	cout << "Stack Overflow";
    	return;
	}
	s.top++;
	s.arr[s.top] = val;
}
 
void pop(Stack &s) {
	if(isEmpty(s)) {
    	cout << "Stack Underflow";
    	return;
	}
	s.top--;
}
 
int peek(Stack &s) {
	if(isEmpty(s))
    	return -1;
	return s.arr[s.top];
}
 
int main() {
	Stack s;
	int n;
	cin >> n;
	init(s, n);
	for(int i = 0; i < n; i++) {
    	int val;
    	cin >> val;
    	push(s, val);
	}
	pop(s);
	cout << "Top Element: " << peek(s);
	return 0;
}

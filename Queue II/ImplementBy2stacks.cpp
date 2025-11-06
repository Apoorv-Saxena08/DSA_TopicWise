#include <iostream>
#include <stack>
using namespace std;
 
struct Queue {
	stack<int> s1, s2;
 
	void enqueue(int x) {
    	s1.push(x);
	}
 
	int dequeue() {
    	if(s2.empty()) {
        	while(!s1.empty()) {
            	s2.push(s1.top());
            	s1.pop();
        	}
    	}
    	if(s2.empty()) return -1;
    	int val = s2.top();
    	s2.pop();
    	return val;
	}
};
 
int main() {
	Queue q;
	int n, val;
	cin >> n;
	for(int i = 0; i < n; i++) {
    	cin >> val;
    	q.enqueue(val);
	}
	cout << "Dequeued: " << q.dequeue();
	return 0;
}

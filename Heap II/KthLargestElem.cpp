#include <iostream>
#include <queue>
using namespace std;
 
int main() {
	int n, k;
	cin >> n >> k;
	int a[100];
	for(int i = 0; i < n; i++)
    	cin >> a[i];
 
	priority_queue<int, vector<int>, greater<int>> minHeap;
	for(int i = 0; i < n; i++) {
    	minHeap.push(a[i]);
    	if(minHeap.size() > k)
        	minHeap.pop();
	}
 
	cout << "Kth Largest: " << minHeap.top();
	return 0;
}

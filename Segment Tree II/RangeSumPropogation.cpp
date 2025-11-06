#include <iostream>
using namespace std;
 
int seg[400], lazy[400];
 
void build(int arr[], int index, int low, int high) {
	if(low == high) {
    	seg[index] = arr[low];
    	return;
	}
	int mid = (low + high) / 2;
	build(arr, 2*index+1, low, mid);
	build(arr, 2*index+2, mid+1, high);
	seg[index] = seg[2*index+1] + seg[2*index+2];
}
 
void updateRange(int index, int low, int high, int l, int r, int val) {
	if(lazy[index] != 0) {
    	seg[index] += (high - low + 1) * lazy[index];
    	if(low != high) {
        	lazy[2*index+1] += lazy[index];
        	lazy[2*index+2] += lazy[index];
    	}
    	lazy[index] = 0;
	}
	if(high < l || low > r) return;
	if(l <= low && high <= r) {
    	seg[index] += (high - low + 1) * val;
    	if(low != high) {
        	lazy[2*index+1] += val;
        	lazy[2*index+2] += val;
    	}
    	return;
	}
	int mid = (low + high) / 2;
	updateRange(2*index+1, low, mid, l, r, val);
	updateRange(2*index+2, mid+1, high, l, r, val);
	seg[index] = seg[2*index+1] + seg[2*index+2];
}
 
int query(int index, int low, int high, int l, int r) {
	if(lazy[index] != 0) {
    	seg[index] += (high - low + 1) * lazy[index];
    	if(low != high) {
        	lazy[2*index+1] += lazy[index];
        	lazy[2*index+2] += lazy[index];
    	}
    	lazy[index] = 0;
	}
	if(high < l || low > r) return 0;
	if(l <= low && high <= r) return seg[index];
	int mid = (low + high) / 2;
	return query(2*index+1, low, mid, l, r) + query(2*index+2, mid+1, high, l, r);
}
 
int main() {
	int n;
	cin >> n;
	int arr[100];
	for(int i = 0; i < n; i++) cin >> arr[i];
	build(arr, 0, 0, n-1);
	updateRange(0, 0, n-1, 1, 3, 5);
	cout << "Sum: " << query(0, 0, n-1, 0, n-1);
	return 0;
}

#include <iostream>
using namespace std;
 
int seg[400];
 
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
 
void update(int index, int low, int high, int pos, int val) {
	if(low == high) {
    	seg[index] = val;
    	return;
	}
	int mid = (low + high) / 2;
	if(pos <= mid)
    	update(2*index+1, low, mid, pos, val);
	else
    	update(2*index+2, mid+1, high, pos, val);
	seg[index] = seg[2*index+1] + seg[2*index+2];
}
 
int main() {
	int n;
	cin >> n;
	int arr[100];
	for(int i = 0; i < n; i++) cin >> arr[i];
	build(arr, 0, 0, n-1);
	int pos, val;
	cin >> pos >> val;
	update(0, 0, n-1, pos, val);
	cout << "Updated value set.";
	return 0;
}

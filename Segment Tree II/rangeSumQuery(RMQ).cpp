#include <iostream>
#include <climits>
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
	seg[index] = min(seg[2*index+1], seg[2*index+2]);
}
 
int queryMin(int index, int low, int high, int l, int r) {
	if(r < low || l > high) return INT_MAX;
	if(l <= low && high <= r) return seg[index];
	int mid = (low + high) / 2;
	return min(queryMin(2*index+1, low, mid, l, r),
           	queryMin(2*index+2, mid+1, high, l, r));
}
 
int main() {
	int n;
	cin >> n;
	int arr[100];
	for(int i = 0; i < n; i++) cin >> arr[i];
	build(arr, 0, 0, n-1);
	int l, r;
	cin >> l >> r;
	cout << "Min: " << queryMin(0, 0, n-1, l, r);
	return 0;
}

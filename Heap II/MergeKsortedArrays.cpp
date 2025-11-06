#include <iostream>
#include <queue>
#include <vector>
using namespace std;
 
struct Item {
	int val, row, col;
	bool operator>(const Item &other) const {
    	return val > other.val;
	}
};
 
int main() {
	int k;
	cin >> k;
	vector<vector<int>> arr(k, vector<int>(k));
	for(int i = 0; i < k; i++)
    	for(int j = 0; j < k; j++)
        	cin >> arr[i][j];
 
	priority_queue<Item, vector<Item>, greater<Item>> pq;
	for(int i = 0; i < k; i++)
    	pq.push({arr[i][0], i, 0});
 
	vector<int> result;
	while(!pq.empty()) {
    	Item curr = pq.top();
    	pq.pop();
    	result.push_back(curr.val);
    	if(curr.col + 1 < k)
        	pq.push({arr[curr.row][curr.col + 1], curr.row, curr.col + 1});
	}
 
	for(int x : result)
    	cout << x << " ";
	return 0;
}

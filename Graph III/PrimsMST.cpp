#include <iostream>
#include <queue>
#include <vector>
using namespace std;
 
int main() {
	int n, e;
	cin >> n >> e;
	vector<pair<int, int>> adj[100];
	for(int i = 0; i < e; i++) {
    	int u, v, w;
    	cin >> u >> v >> w;
    	adj[u].push_back({v, w});
    	adj[v].push_back({u, w});
	}
 
	vector<int> key(n, 1e9), mst(n, 0), parent(n, -1);
	key[0] = 0;
 
	for(int i = 0; i < n - 1; i++) {
    	int u = -1;
    	for(int v = 0; v < n; v++)
        	if(!mst[v] && (u == -1 || key[v] < key[u]))
            	u = v;
    	mst[u] = 1;
    	for(auto it : adj[u]) {
        	int v = it.first, w = it.second;
        	if(!mst[v] && w < key[v]) {
            	key[v] = w;
            	parent[v] = u;
        	}
    	}
	}
 
	for(int i = 1; i < n; i++)
    	cout << parent[i] << " - " << i << endl;
	return 0;
}

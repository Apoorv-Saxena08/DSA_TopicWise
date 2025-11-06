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
 
	vector<int> dist(n, 1e9);
	dist[0] = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push({0, 0});
 
	while(!pq.empty()) {
    	int d = pq.top().first;
    	int node = pq.top().second;
    	pq.pop();
 
    	for(auto it : adj[node]) {
        	int v = it.first;
        	int w = it.second;
        	if(d + w < dist[v]) {
            	dist[v] = d + w;
            	pq.push({dist[v], v});
        	}
    	}
	}
 
	for(int i = 0; i < n; i++)
    	cout << dist[i] << " ";
	return 0;
}

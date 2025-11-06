#include <iostream>
#include <queue>
#include <vector>
using namespace std;
 
bool isCycle(int n, vector<int> adj[]) {
	vector<int> visited(n, 0);
	for(int i = 0; i < n; i++) {
    	if(!visited[i]) {
        	queue<pair<int, int>> q;
        	q.push({i, -1});
        	visited[i] = 1;
        	while(!q.empty()) {
            	int node = q.front().first;
            	int parent = q.front().second;
            	q.pop();
            	for(int it : adj[node]) {
                	if(!visited[it]) {
                    	visited[it] = 1;
                    	q.push({it, node});
                	} else if(it != parent)
                    	return true;
            	}
        	}
    	}
	}
	return false;
}
 
int main() {
	int n, e;
	cin >> n >> e;
	vector<int> adj[100];
	for(int i = 0; i < e; i++) {
    	int u, v;
    	cin >> u >> v;
    	adj[u].push_back(v);
    	adj[v].push_back(u);
	}
	cout << (isCycle(n, adj) ? "Cycle Found" : "No Cycle");
	return 0;
}

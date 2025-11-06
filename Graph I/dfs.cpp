#include <iostream>
#include <vector>
using namespace std;
 
void dfs(int node, vector<int> adj[], vector<int> &visited) {
	visited[node] = 1;
	cout << node << " ";
	for(int it : adj[node])
    	if(!visited[it])
        	dfs(it, adj, visited);
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
	vector<int> visited(n, 0);
	dfs(0, adj, visited);
	return 0;
}

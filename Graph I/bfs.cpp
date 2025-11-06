#include <iostream>
#include <queue>
#include <vector>
using namespace std;
 
void bfs(int n, vector<int> adj[]) {
	vector<int> visited(n, 0);
	queue<int> q;
	q.push(0);
	visited[0] = 1;
	while(!q.empty()) {
    	int node = q.front();
    	q.pop();
    	cout << node << " ";
    	for(int it : adj[node]) {
        	if(!visited[it]) {
            	visited[it] = 1;
            	q.push(it);
        	}
    	}
	}
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
	bfs(n, adj);
	return 0;
}

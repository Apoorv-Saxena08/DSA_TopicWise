#include <iostream>
#include <stack>
#include <vector>
using namespace std;
 
void topoDFS(int node, vector<int> adj[], vector<int> &visited, stack<int> &st) {
	visited[node] = 1;
	for(int it : adj[node])
    	if(!visited[it])
        	topoDFS(it, adj, visited, st);
	st.push(node);
}
 
int main() {
	int n, e;
	cin >> n >> e;
	vector<int> adj[100];
	for(int i = 0; i < e; i++) {
    	int u, v;
    	cin >> u >> v;
    	adj[u].push_back(v);
	}
	vector<int> visited(n, 0);
	stack<int> st;
	for(int i = 0; i < n; i++)
    	if(!visited[i])
        	topoDFS(i, adj, visited, st);
	while(!st.empty()) {
    	cout << st.top() << " ";
    	st.pop();
	}
	return 0;
}

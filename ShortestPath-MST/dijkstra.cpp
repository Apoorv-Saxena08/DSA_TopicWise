#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n,e; cin>>n>>e;
	vector<pair<int,int>> adj[100];
	for(int i=0;i<e;i++){ int u,v,w; cin>>u>>v>>w; adj[u].push_back({v,w}); /* if undirected: adj[v].push_back({u,w}); */ }
	int dist[100]; for(int i=0;i<n;i++) dist[i]=1e9;
	bool used[100]={0};
	dist[0]=0;
	for(int i=0;i<n;i++){
    	int v=-1;
    	for(int j=0;j<n;j++) if(!used[j] && (v==-1 || dist[j]<dist[v])) v=j;
    	if(dist[v]==1e9) break;
    	used[v]=1;
    	for(auto p: adj[v]){
        	int to=p.first, w=p.second;
        	if(dist[v]+w<dist[to]) dist[to]=dist[v]+w;
    	}
	}
	for(int i=0;i<n;i++) cout<<dist[i]<<" ";
	return 0;
}

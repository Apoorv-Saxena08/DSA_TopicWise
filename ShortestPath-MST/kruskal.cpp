#include <iostream>
#include <algorithm>
using namespace std;
struct Edge{ int u,v,w; };
int parent[100];
int findp(int x){ return parent[x]==x?x:parent[x]=findp(parent[x]); }
int main(){
	int n,e; cin>>n>>e; Edge edges[1000];
	for(int i=0;i<e;i++) cin>>edges[i].u>>edges[i].v>>edges[i].w;
	sort(edges, edges+e, [](Edge &a, Edge &b){ return a.w<b.w; });
	for(int i=0;i<n;i++) parent[i]=i;
	int mstW=0;
	for(int i=0;i<e;i++){
    	int pu=findp(edges[i].u), pv=findp(edges[i].v);
    	if(pu!=pv){ parent[pu]=pv; mstW+=edges[i].w; cout<<edges[i].u<<" - "<<edges[i].v<<" weight "<<edges[i].w<<"\n"; }
	}
	cout<<"Total MST weight: "<<mstW;
	return 0;
}

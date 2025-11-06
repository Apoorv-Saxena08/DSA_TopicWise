#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n; cin>>n; int a[100];
	for(int i=0;i<n;i++) cin>>a[i];
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++) mp[a[i]]++;
	vector<pair<int,int>> v;
	for(auto p:mp) v.push_back({p.second,p.first});
	sort(v.begin(), v.end(), [](const pair<int,int>&x,const pair<int,int>&y){return x.first>y.first;});
	for(auto p:v) cout<<p.second<<" ";
	return 0;
}

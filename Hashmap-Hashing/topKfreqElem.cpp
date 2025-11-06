#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
	int n; cin>>n; int a[100];
	for(int i=0;i<n;i++) cin>>a[i];
	unordered_map<int,int> cnt;
	for(int i=0;i<n;i++) cnt[a[i]]++;
	// simple print frequencies (k-selection normally uses heap)
	for(auto p:cnt) cout<<p.first<<" -> "<<p.second<<endl;
	return 0;
}

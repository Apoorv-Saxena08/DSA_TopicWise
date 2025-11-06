#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
	int n; cin>>n; int a[100];
	for(int i=0;i<n;i++) cin>>a[i];
	unordered_map<int,int> first;
	int sum=0, best=0;
	for(int i=0;i<n;i++){
    	sum+=a[i];
    	if(sum==0) best = i+1;
    	if(first.find(sum)==first.end()) first[sum]=i;
    	else best = max(best, i-first[sum]);
	}
	cout<<best; return 0;
}

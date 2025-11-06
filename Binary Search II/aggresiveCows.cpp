#include <iostream>
#include <algorithm>
using namespace std;
bool canPlace(int stalls[], int n, int cows, int gap){
	int count=1, last=stalls[0];
	for(int i=1;i<n;i++){
    	if(stalls[i]-last>=gap){ count++; last=stalls[i]; if(count==cows) return true; }
	}
	return false;
}
int main(){
	int n,c; cin>>n>>c; int s[100];
	for(int i=0;i<n;i++) cin>>s[i];
	sort(s,s+n);
	int l=0, r=s[n-1]-s[0], ans=0;
	while(l<=r){
    	int mid=(l+r)/2;
    	if(canPlace(s,n,c,mid)){ ans=mid; l=mid+1; } else r=mid-1;
	}
	cout<<ans; return 0;
}

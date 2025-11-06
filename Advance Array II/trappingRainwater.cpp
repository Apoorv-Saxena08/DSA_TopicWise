#include <iostream>
using namespace std;
int main(){
	int n; cin>>n; int h[100];
	for(int i=0;i<n;i++) cin>>h[i];
	int l=0, r=n-1, leftMax=0, rightMax=0, ans=0;
	while(l<=r){
    	if(h[l]<=h[r]){
        	if(h[l]>=leftMax) leftMax=h[l];
        	else ans += leftMax - h[l];
        	l++;
    	} else {
        	if(h[r]>=rightMax) rightMax=h[r];
        	else ans += rightMax - h[r];
        	r--;
    	}
	}
	cout<<ans;
	return 0;
}

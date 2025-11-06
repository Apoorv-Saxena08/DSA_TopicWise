#include <iostream>
using namespace std;
int main(){
	int n; cin>>n; int h[100];
	for(int i=0;i<n;i++) cin>>h[i];
	int l=0, r=n-1; int best=0;
	while(l<r){
    	int area = min(h[l], h[r]) * (r-l);
    	if(area>best) best=area;
    	if(h[l]<h[r]) l++; else r--;
	}
	cout<<best;
	return 0;
}

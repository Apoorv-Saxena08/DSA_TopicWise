#include <iostream>
#include <algorithm>
using namespace std;
void permute(int a[], int l, int r){
	if(l==r){ for(int i=0;i<=r;i++) cout<<a[i]<<" "; cout<<endl; return; }
	for(int i=l;i<=r;i++){ swap(a[l],a[i]); permute(a,l+1,r); swap(a[l],a[i]); }
}
int main(){ int n; cin>>n; int a[10]; for(int i=0;i<n;i++) cin>>a[i]; permute(a,0,n-1); return 0; }

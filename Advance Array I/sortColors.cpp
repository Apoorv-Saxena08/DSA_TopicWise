#include <iostream>
using namespace std;
int main(){
	int n; cin>>n; int a[100];
	for(int i=0;i<n;i++) cin>>a[i];
	int low=0, mid=0, high=n-1;
	while(mid<=high){
    	if(a[mid]==0){ int t=a[low]; a[low]=a[mid]; a[mid]=t; low++; mid++; }
    	else if(a[mid]==1) mid++;
    	else { int t=a[mid]; a[mid]=a[high]; a[high]=t; high--; }
	}
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
}

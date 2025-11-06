#include <iostream>
using namespace std;
int main(){
	int n,k; cin>>n>>k; int a[100];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<=n-k;i++){
    	int mx=a[i];
    	for(int j=i+1;j<i+k;j++) if(a[j]>mx) mx=a[j];
    	cout<<mx<<" ";
	}
	return 0;
}

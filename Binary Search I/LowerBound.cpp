#include <iostream>
using namespace std;
int lowerBound(int a[], int n, int key){
	int l=0, r=n;
	while(l<r){
    	int m=(l+r)/2;
    	if(a[m]<key) l=m+1; else r=m;
	}
	return l;
}
int main(){
	int n; cin>>n; int a[100];
	for(int i=0;i<n;i++) cin>>a[i];
	int key; cin>>key;
	cout<<lowerBound(a,n,key);
	return 0;
}

#include <iostream>
using namespace std;
int search(int a[], int n, int key){
	int l=0, r=n-1;
	while(l<=r){
    	int m=(l+r)/2;
    	if(a[m]==key) return m;
    	if(a[l]<=a[m]){
        	if(key>=a[l] && key<a[m]) r=m-1; else l=m+1;
    	} else {
        	if(key>a[m] && key<=a[r]) l=m+1; else r=m-1;
    	}
	}
	return -1;
}
int main(){ 
  int n; cin>>n; int a[100]; 
  for(int i=0;i<n;i++)cin>>a[i]; 
  int k; cin>>k; 
  cout<<search(a,n,k); 
  return 0; 
}

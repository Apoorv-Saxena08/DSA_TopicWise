#include <iostream>
using namespace std;
int main(){
	int m,n; cin>>m>>n;
	int a[200];
	for(int i=0;i<m;i++) cin>>a[i];
	int b[100];
	for(int j=0;j<n;j++) cin>>b[j];
	int i=m-1, j=n-1, k=m+n-1;
	while(i>=0 && j>=0){
    	if(a[i]>b[j]){ a[k--]=a[i--]; } else { a[k--]=b[j--]; }
	}
	while(j>=0) a[k--]=b[j--];
	for(int t=0;t<m+n;t++) cout<<a[t]<<" ";
	return 0;
}

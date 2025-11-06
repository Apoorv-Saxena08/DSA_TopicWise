#include <iostream>
using namespace std;
int upperBound(int a[], int n, int key){
	int l=0, r=n;
	while(l<r){
    	int m=(l+r)/2;
    	if(a[m]<=key) l=m+1; else r=m;
	}
	return l;
}

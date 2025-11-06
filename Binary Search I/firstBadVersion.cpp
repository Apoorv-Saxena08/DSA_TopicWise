#include <iostream>
using namespace std;
bool isBadVersion(int v); // assume provided
int firstBad(int n){
	int l=1, r=n;
	while(l<r){
    	int m = l + (r-l)/2;
    	if(isBadVersion(m)) r=m; else l=m+1;
	}
	return l;
}

#include <iostream>
using namespace std;
int main(){
	int n; cin>>n;
	int a[100];
	for(int i=0;i<n;i++) cin>>a[i];
	int minp = a[0], profit = 0;
	for(int i=1;i<n;i++){
    	if(a[i] - minp > profit) profit = a[i] - minp;
    	if(a[i] < minp) minp = a[i];
	}
	cout<<profit;
	return 0;
}

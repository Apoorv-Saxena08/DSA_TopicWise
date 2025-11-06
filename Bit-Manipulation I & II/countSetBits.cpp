#include <iostream>
using namespace std;
int countSet(int n){
	int c=0;
	while(n){ n &= (n-1); c++; }
	return c;
}
int main(){ int n; cin>>n; cout<<countSet(n); return 0; }

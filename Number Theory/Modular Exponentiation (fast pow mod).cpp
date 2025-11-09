#include <iostream>
using namespace std;
long long modpow(long long a,long long e,long long m){
	long long res=1% m; a%=m;
	while(e){
    	if(e&1) res=(res*a)%m;
    	a=(a*a)%m; e>>=1;
	}
	return res;
}
int main(){ long long a,e,m; cin>>a>>e>>m; cout<<modpow(a,e,m); return 0; }

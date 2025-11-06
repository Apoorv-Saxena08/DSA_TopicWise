#include <iostream>
using namespace std;
int main(){
	int N; cin>>N; bool isPrime[1000];
	for(int i=0;i<=N;i++) isPrime[i]=true;
	isPrime[0]=isPrime[1]=false;
	for(int p=2;p*p<=N;p++) if(isPrime[p]) for(int q=p*p;q<=N;q+=p) isPrime[q]=false;
	for(int i=2;i<=N;i++) if(isPrime[i]) cout<<i<<" ";
	return 0;
}

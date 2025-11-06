#include <iostream>
#include <string>
using namespace std;
int main(){
	string s; getline(cin,s);
	int last[256]; for(int i=0;i<256;i++) last[i]=-1;
	int start=0, best=0;
	for(int i=0;i<s.length();i++){
    	if(last[(unsigned char)s[i]]>=start) start = last[(unsigned char)s[i]]+1;
    	last[(unsigned char)s[i]] = i;
    	if(i-start+1>best) best=i-start+1;
	}
	cout<<best; return 0;
}

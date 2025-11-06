#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main(){
	string s; getline(cin,s);
	unordered_map<char,int> mp;
	for(int i=0;i<s.length();i++) mp[s[i]]++;
	for(auto p : mp) cout<<p.first<<" -> "<<p.second<<endl;
	return 0;
}

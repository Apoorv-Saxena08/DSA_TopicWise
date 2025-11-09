#include <iostream>
#include <algorithm>
using namespace std;
int main(){ int n,m; cin>>n>>m; int g[100], s[100]; for(int i=0;i<n;i++)cin>>g[i]; for(int j=0;j<m;j++)cin>>s[j]; sort(g,g+n); sort(s,s+m); int i=0,j=0,ans=0; while(i<n && j<m){ if(s[j]>=g[i]){ ans++; i++; j++; } else j++; } cout<<ans; return 0; }

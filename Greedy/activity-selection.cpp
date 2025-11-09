#include <iostream>
#include <algorithm>
using namespace std;
int main(){ int n; cin>>n; pair<int,int> a[100]; for(int i=0;i<n;i++) cin>>a[i].second>>a[i].first; // input: start end
	sort(a,a+n); int count=0,last= -1;
	for(int i=0;i<n;i++){ if(a[i].second>last){ count++; last=a[i].first; } }
	cout<<count; return 0;
}

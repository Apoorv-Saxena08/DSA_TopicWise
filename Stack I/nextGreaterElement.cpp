#include <iostream>
#include <stack>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	int a[100];
	for(int i = 0; i < n; i++)
    	cin >> a[i];
 
	int result[100];
	stack<int> st;
 
	for(int i = n - 1; i >= 0; i--) {
    	while(!st.empty() && st.top() <= a[i])
        	st.pop();
    	if(st.empty())
        	result[i] = -1;
    	else
        	result[i] = st.top();
    	st.push(a[i]);
	}
 
	for(int i = 0; i < n; i++)
    	cout << result[i] << " ";
 
	return 0;
}

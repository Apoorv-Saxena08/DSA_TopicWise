#include <iostream>
#include <stack>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	int price[100];
	for(int i = 0; i < n; i++)
    	cin >> price[i];
 
	int span[100];
	stack<int> st;
 
	for(int i = 0; i < n; i++) {
    	while(!st.empty() && price[st.top()] <= price[i])
        	st.pop();
    	span[i] = (st.empty()) ? (i + 1) : (i - st.top());
    	st.push(i);
	}
 
	for(int i = 0; i < n; i++)
    	cout << span[i] << " ";
	return 0;
}

#include <iostream>
#include <stack>
#include <string>
using namespace std;
 
int evaluate(string s) {
	stack<int> st;
	for(int i = 0; i < s.length(); i++) {
    	char c = s[i];
    	if(isdigit(c))
        	st.push(c - '0');
    	else {
        	int b = st.top(); st.pop();
        	int a = st.top(); st.pop();
        	switch(c) {
            	case '+': st.push(a + b); break;
            	case '-': st.push(a - b); break;
            	case '*': st.push(a * b); break;
            	case '/': st.push(a / b); break;
        	}
    	}
	}
	return st.top();
}
 
int main() {
	string s;
	cin >> s;
	cout << evaluate(s);
	return 0;
}

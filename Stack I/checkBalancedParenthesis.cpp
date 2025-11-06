#include <iostream>
#include <stack>
#include <string>
using namespace std;
 
bool isBalanced(string s) {
	stack<char> st;
	for(int i = 0; i < s.length(); i++) {
    	char c = s[i];
    	if(c == '(' || c == '{' || c == '[')
        	st.push(c);
    	else {
        	if(st.empty()) return false;
        	char top = st.top();
        	st.pop();
        	if((c == ')' && top != '(') ||
           	(c == '}' && top != '{') ||
           	(c == ']' && top != '['))
            	return false;
    	}
	}
	return st.empty();
}
 
int main() {
	string s;
	cin >> s;
	if(isBalanced(s))
    	cout << "Balanced";
	else
    	cout << "Not Balanced";
	return 0;
}

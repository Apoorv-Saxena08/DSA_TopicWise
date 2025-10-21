#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void characterFrequency(string s) {
        map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        for (auto it : freq) {
            cout << it.first << " : " << it.second << endl;
        }
    }
};

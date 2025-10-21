#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char maxOccurringChar(string s) {
        map<char, int> freq;
        int maxFreq = 0;
        char ans = '\0';
        
        for (char c : s) {
            freq[c]++;
            if (freq[c] > maxFreq) {
                maxFreq = freq[c];
                ans = c;
            }
        }
        return ans;
    }
};

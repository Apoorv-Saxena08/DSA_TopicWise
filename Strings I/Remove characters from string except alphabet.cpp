class Solution {
public:
    string removeNonAlphabets(string s) {
        string result = "";
        for (char c : s) {
            if (isalpha(c)) {
                result += c;
            }
        }
        return result;
    }
};

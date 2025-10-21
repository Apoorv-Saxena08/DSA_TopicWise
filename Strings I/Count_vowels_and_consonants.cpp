class Solution {
public:
    void countVowelsConsonantsSpaces(string s) {
        int vowels = 0, consonants = 0, spaces = 0;
        for (char c : s) {
            if (c == ' ') {
                spaces++;
            } else if (isalpha(c)) {
                char ch = tolower(c);
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }
        cout << "Vowels: " << vowels << endl;
        cout << "Consonants: " << consonants << endl;
        cout << "Spaces: " << spaces << endl;
    }
};

class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
    string reverseVowels(string s) {
        int n = s.size();
        int l = 0;
        int r = n - 1;

        while (l <= r) {
            // check if  both vowel
            if (isVowel(s[l]) && isVowel(s[r])) {
                swap(s[l], s[r]);
                l++;
                r--;
                // check if right not vowel
            } else if (!isVowel(s[r])) {
                r--;
                // check if left is not vowel
            } else {
                l++;
            }
        }
        return s;
    }
};
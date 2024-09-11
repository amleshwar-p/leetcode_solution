class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') ||
                (s[i] >= '0' && s[i] <= '9')) {
                if ((s[i] >= 'A' && s[i] <= 'Z')) {
                    s[i] += 32;
                }
                str += s[i];
            }
        }
        for (int i = 0; i < str.size() / 2; i++) {
            if (str[i] != str[str.size() - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};
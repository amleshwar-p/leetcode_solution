class Solution {
public:
    string recur(int n) {
        if (n == 1) {
            return "1";
        }
        string s = recur(n - 1);
        string ans = "";
        int i = 0;
        while (i < s.size()) {
            char lastDigit = s[i];
            int count = 0;
            while (i < s.size() && s[i] == lastDigit) {
                i++;
                count++;
            }
            ans += to_string(count) + lastDigit;
        }
        return ans;
    }
    string countAndSay(int n) { return recur(n); }
};
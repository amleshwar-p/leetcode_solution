class Solution {
public:
    int maximumLength(string s) {
        map<pair<char, int>, int> mp;
        int n = s.size();
        int maxLen = 0;
        for (int i = 0; i < n; i++) {
            int len = 1;
            mp[{s[i], len}]++;
            for (int j = i + 1; j < n; j++) {
                if (s[j] == s[j - 1]) {
                    len++;
                    mp[{s[i], len}]++;
                } else {
                    break;
                }
            }
            if (mp[{s[i], len}] >= 3) {
                maxLen = max(len, maxLen);
            }
        }
        if (maxLen == 0) {
            return -1;
        }
        return maxLen;
    }
};
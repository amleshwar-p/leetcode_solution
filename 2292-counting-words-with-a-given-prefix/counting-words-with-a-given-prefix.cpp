class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        for (string word : words) {
            if (word.find(pref) == 0) {
                ans++;
            }
        }
        return ans;
    }
};
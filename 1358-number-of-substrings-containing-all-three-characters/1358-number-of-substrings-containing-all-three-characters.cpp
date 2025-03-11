class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans = 0;
        vector<int> result(3);

        // left pointer
        int i = 0;
        for (auto ch : s) {
            result[ch - 'a']++;
            // check vector
            while (result[0] > 0 && result[1] > 0 && result[2] > 0) {
                result[s[i++] - 'a']--;
            }
                ans += i;
        }
        return ans;
    }
};
// abcabc
// abc - abca - abcab - abcabc - bca - bcab - bcabc - cab - cabc -abc

//
class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        int mp[26] = {0}; // store count a-z
        int sum = 0, mod = 1e9 + 7;

        for (char c : s) {
            mp[c - 'a']++;
        }

        while (t--) {
            int z = mp[25]; // store z
            /// shift all count
            for (int i = 25; i > 0; i--) {
                mp[i] = mp[i - 1];
            }
            mp[0] = z;                 // set a to prev z
            mp[1] = (mp[1] + z) % mod; // update b
        }

        // total length
        for (int i = 0; i < 26; i++)
            sum = (sum + mp[i]) % mod;

        return sum;
    }
};

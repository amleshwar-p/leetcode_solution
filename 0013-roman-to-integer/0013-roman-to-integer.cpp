class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mp;

        mp.insert({'I', 1});
        mp.insert({'V', 5});
        mp.insert({'X', 10});
        mp.insert({'L', 50});
        mp.insert({'C', 100});
        mp.insert({'D', 500});
        mp.insert({'M', 1000});

        int count = 0;

        for (int i = 0; i < s.size(); i++) {
            if (i == s.size() - 1) {
                count += mp[s[i]];
            } else if (mp[s[i]] >= mp[s[i + 1]]) {
                count += mp[s[i]];
            } else {
                count -= mp[s[i]];
            }
        }
        return count;
    }
};
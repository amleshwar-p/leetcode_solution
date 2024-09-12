class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> s1(allowed.begin(), allowed.end());
        int ans = 0;

        for (auto x : words) {
            bool flag = true;
            for (int j = 0; j < x.size(); j++) {
                if (s1.find(x[j]) == s1.end()) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                ans++;
            }
        }
        return ans;
    }
};
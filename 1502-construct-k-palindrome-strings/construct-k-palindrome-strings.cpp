class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size();
        // if size less already false
        if (n < k) {
            return false;
        }

        vector<int> result(26, 0);
        for (char ch : s) {
            result[ch - 'a']++;
        }
        int x = 0;
        for (auto v : result) {
            x += v & true;
        }
        bool flag = false;
        if (x <= k) {
            flag = true;
        }

        return flag;
    }
};
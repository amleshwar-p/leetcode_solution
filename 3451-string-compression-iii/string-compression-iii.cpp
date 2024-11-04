class Solution {
public:
    string compressedString(string word) {
        int n = word.size();
        string ans = "";
        int cnt = 1;

        for (int i = 0; i < n - 1; i++) {
            if (word[i] != word[i + 1]) {
                ans.push_back(cnt + '0');
                ans.push_back(word[i]);
                cnt = 1;
            } else {
                cnt++;
                if (cnt == 10) {
                    // add till 9 and change
                    ans.push_back(cnt - 1 + '0');
                    ans.push_back(word[i]);
                    cnt = 1;
                }
            }
        }
        ans.push_back(cnt + '0');
        ans.push_back(word[n - 1]);
        return ans;
    }
};
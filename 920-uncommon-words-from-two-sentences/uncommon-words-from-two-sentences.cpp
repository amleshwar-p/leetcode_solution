class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {

        unordered_map<string, int> mp;
        string word;

        // s1 split
        stringstream ss1(s1);
        while (ss1 >> word) {
            mp[word]++;
        }
        // s2 split
        stringstream ss2(s2);
        while (ss2 >> word) {
            mp[word]++;
        }

        // check if coming only 1 time
        vector<string> ans;
        for (auto it : mp) {
            if (it.second == 1) {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
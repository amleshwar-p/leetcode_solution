class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int n = words.size();
        vector<int> prefix(n, 0);

        // Precompute prefix sums
        for (int i = 0; i < n; ++i) {
            bool isVowelString = vowels.count(words[i][0]) && vowels.count(words[i].back());
            prefix[i] = (i > 0 ? prefix[i - 1] : 0) + isVowelString;
        }

        vector<int> ans;
        for (auto& query : queries) {
            int li = query[0], ri = query[1];
            int count = prefix[ri] - (li > 0 ? prefix[li - 1] : 0);
            ans.push_back(count);
        }

        return ans;
    }
};

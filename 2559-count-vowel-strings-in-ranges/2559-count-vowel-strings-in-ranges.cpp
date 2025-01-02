class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        vector<int> ans;

        for (auto& query : queries) {
            int li = query[0], ri = query[1];
            int count = 0;

            for (int i = li; i <= ri; ++i) {
                // Check if the word starts and ends with a vowel
                if (vowels.count(words[i][0]) && vowels.count(words[i].back())) {
                    count++;
                }
            }
            ans.push_back(count);
        }

        return ans;
    }
};

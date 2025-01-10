class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> maxFreq(26, 0);

        for (auto word2 : words2) {
            vector<int> freq(26, 0);
            for (char ch : word2) {
                freq[ch - 'a']++;
            }
            for (int i = 0; i < 26; i++) {
                maxFreq[i] = max(maxFreq[i], freq[i]);
            }
        }
        vector<string> ans;

        for (auto word1 : words1) {
            vector<int> freq(26, 0);
            for (char ch : word1) {
                freq[ch - 'a']++;
            }

            bool flag = true;
            for(int i = 0;i<26;i++){
                if(freq[i] < maxFreq[i]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                ans.push_back(word1);
            }
        }
        return ans;
    }
};

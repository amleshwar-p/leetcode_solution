class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string temp;
        int i = 0;

        while (i < word1.size() || i < word2.size()) {
            if (i < word1.size()) {
                temp += word1[i];
            }
             if (i < word2.size()) {
                temp += word2[i];
            }
            i++;           
        }
        return temp;
    }
};
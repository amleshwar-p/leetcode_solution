class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;

        for (string sentence : sentences) {
            int count = 1;
            for (char ch : sentence) {
                if (ch == ' ') {
                    count++;
                }
            }
            maxWords = max(maxWords, count);
        }

        return maxWords;
    }
};
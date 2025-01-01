class Solution {
public:
    int maxScore(string s) {
        int maxScore = 0;
        int countZero = 0;
        int countOne = count(s.begin(), s.end(), '1');

        for (int i = 0; i < s.size() - 1; i++) {
            countZero += (s[i] == '0');
            countOne -= (s[i] == '1');
            maxScore = max(maxScore, countZero + countOne);
        }

        return maxScore;
    }
};
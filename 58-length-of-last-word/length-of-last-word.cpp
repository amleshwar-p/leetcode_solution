class Solution {
public:
    int lengthOfLastWord(string s) {

        int str = s.size() - 1;

        int count = 0;
        while (s[str] == ' ') {
            str--;
        }
        while (str >= 0 && s[str] != ' ') {
            str--;
            count++;
        }
        return count;
    }
};

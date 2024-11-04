class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int count = 1;

        for (int i = 1; i < word.size(); i++) {
            if (word[i] == word[i - 1]) {
                count++;
                if (count == 9) {  // Max 9 repetitions
                    comp += to_string(9) + word[i - 1];
                    count = 0;  // Reset to 1 for any remaining characters
                }
            } else {
                comp += to_string(count) + word[i - 1];
                count = 1;  // Reset for new character sequence
            }
        }

        // Add the last character sequence
        comp += to_string(count) + word.back();

        return comp;
    }
};

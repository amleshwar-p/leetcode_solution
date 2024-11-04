class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int n = word.size();
        int count = 1;

        for (int i = 0; i < word.size()-1; i++) {
            if (word[i] != word[i + 1]) {

                comp.push_back(count + '0');
                comp.push_back(word[i]);
                count = 1;
            } else {
                count++;
                if (count == 10) {
                    comp.push_back(count-1 + '0');
                    comp.push_back(word[i]);
                    count = 1;
                }
            }
        }
        // Add the last character sequence
        comp.push_back(count + '0');
        comp.push_back(word[n - 1]);
        return comp;
    }
};

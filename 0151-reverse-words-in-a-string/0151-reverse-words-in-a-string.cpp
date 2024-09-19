class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        int n = s.size();
        int start = 0, end = 0;
        while (end < n) {
            while (end < n && s[end] != ' ')
                end++;                                   // end of 1st word
            reverse(s.begin() + start, s.begin() + end); // Reverse that word
            end++; // Move to the next word
            start = end;
        }
        //extra space remove ab
        int i = 0;
        for (int j = 0; j < n; ++j) {
            if (s[j] != ' ') { // If it's not a space, place it in the result
                if (i != 0)
                    s[i++] = ' '; // Add space before the word if needed
                int k = j;
                while (k < n && s[k] != ' ')
                    s[i++] = s[k++]; // Copy the word
                j = k;
            }
        }

        s.resize(i); // Resize the string 
        return s;
    }
};

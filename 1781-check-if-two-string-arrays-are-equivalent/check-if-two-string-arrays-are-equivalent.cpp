class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1 = "";
        string str2 = "";

        // word 1
        for (string sentence : word1) {
            str1 += sentence;
        }
        // word 2
        for (string sentence : word2) {
            str2 += sentence;
        }

        if(str1 == str2){
            return true;
        }else{
            return false;
        }
    }
};

// Improved Approach:
// Concatenate Strings from word1: Loop through word1 and concatenate all
// elements into a single string. Concatenate Strings from word2: Do the same
// for word2. Compare Both Strings: After concatenating, check if the two
// strings are equal.

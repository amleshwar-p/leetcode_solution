class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        set<char> vowel = {'a', 'e', 'i', 'o', 'u'};

        int currVowel = 0;
        int maxVowel = 0;

        for (int i = 0; i < k; i++) {
            if (vowel.count(s[i])) { // check if s[i] is a vowel
                currVowel++;
            }
        }
        maxVowel = currVowel;
        for (int i = k; i < n; i++) {
            // add to new window
            if (vowel.count(s[i])) {
                currVowel++;
            }
            // remove prev from window
            if (vowel.count(s[i - k])) {
                currVowel--;
            }
            maxVowel = max(maxVowel, currVowel);
        }
        return maxVowel;
    }
};

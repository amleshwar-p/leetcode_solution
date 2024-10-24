class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        set<char> vowel = {'a', 'e', 'i', 'o', 'u'};
        int currVowel = 0;
        int maxVowel = 0;

        for (int i = 0; i < k; i++) {
            if (vowel.count(s[i])) {
                currVowel++;
            }
        }
        // init max vowels
        maxVowel = currVowel;

        for (int i = k; i < n; i++) {
            // move to next window
            if (vowel.count(s[i])) {
                currVowel++;
            }
            // remove prev from window
            if (vowel.count(s[i - k])) {
                currVowel--;
            }
            // update max
            maxVowel = max(maxVowel, currVowel);
        }
        return maxVowel;
    }
};
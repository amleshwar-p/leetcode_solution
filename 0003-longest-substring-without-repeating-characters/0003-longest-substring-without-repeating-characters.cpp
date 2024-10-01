class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int n = s.size();
        int left = 0;
        int right = 0;
        unordered_set<char> mp;
        while (left < n && right < n) {
            if (mp.find(s[right]) == mp.end()) { // if char does not exist
                mp.insert(s[right]); // insert char in set and increase right
                right++;
                res = max(res,right - left); // check if new distance is longer than prev
            } else {
                mp.erase(s[left]); // if char is not in set or repeated char we
                left++;            // update left to another
            }
        }

        return res;
    }
};
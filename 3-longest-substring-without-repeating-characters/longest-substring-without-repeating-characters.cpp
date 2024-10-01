class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int ans = 0;
        int n = s.size();
        int left = 0;
        int right = 0;

        unordered_set<char> st;

        while (left < n && right < n) {
            if (st.find(s[right]) == st.end()) {
                st.insert(s[right]);
                ans = max(ans, right - left+1);
                right++;
            } else {
                st.erase(s[left]);
                left++; 
            }
        }
        return ans;
    }
};
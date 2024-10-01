class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size();
        int n = needle.size();
        if (h < n) {
            return -1;
        }

        for (int i = 0; i <= h-n; i++) {
            string tmp = haystack.substr(i,n );

            if (tmp == needle) {
                return i;
            }
        }
        return -1;
    }
};
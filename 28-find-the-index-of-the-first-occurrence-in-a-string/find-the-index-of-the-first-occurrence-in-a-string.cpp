class Solution {
public:
    int strStr(string haystack, string needle) {
        int x = haystack.size();
        int y = needle.size();
        if (x < y) {
            return -1;
        }

        for (int i = 0; i <= x - y; i++) {
            string tmp = haystack.substr(i, y);

            if (tmp == needle) {
                return i;
            }
        }
        return -1;
    }
};
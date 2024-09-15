class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.empty()) {
            return "";
        }
        sort(strs.begin(), strs.end());

        string first = strs.front();
        string last = strs.back();

        int i = 0;
        while (i < first.size() && i < last.size() && first[i] == last[i]) {
            i++;
        }
        string ans = first.substr(0, i);
        return ans;
    }
};
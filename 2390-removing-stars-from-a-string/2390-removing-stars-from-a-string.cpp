class Solution {
public:
    string removeStars(string s) {
        string str = "";
        int n = s.size();

        for (char ch : s) {
            if (ch == '*') {
                if (!str.empty()) {
                    str.pop_back();
                }
            } else {
                str.push_back(ch);
            }
        }
        return str;
    }
};
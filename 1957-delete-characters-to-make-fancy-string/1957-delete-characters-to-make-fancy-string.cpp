class Solution {
public:
    string makeFancyString(string s) {
        string temp = "";
        int count = 1;
        temp.push_back(s[0]);

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                count++;
            } else {
                count = 1;
            }

            if (count < 3) {
                temp.push_back(s[i]);
            }
        }

        return temp;
    }
};

class Solution {
private:
    void solve(string digits, vector<string>& ans, string output, int index,
               string mapping[]) {

        // base
        if (index >= digits.size()) {
            ans.push_back(output);
            return;
        }

        int number = digits[index] - '0';
        string value = mapping[number];

        for (int i = 0; i < value.size(); i++) {
            output.push_back(value[i]);
            solve(digits, ans, output, index + 1, mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output = "";
        int index = 0;
        if (digits.empty()) {
            return ans;
        }
        string mapping[10] = {"",    "",    "abc",  "def", "ghi",
                              "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, ans, output, index, mapping);

        return ans;
    }
};
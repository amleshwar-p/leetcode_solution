class Solution {
public:
    string largestNumber(vector<int>& nums) {

        // to string
        vector<string> result;
        for (auto x : nums) {
            result.push_back(to_string(x));
        }
        // custom sort
        sort(result.begin(), result.end(),
             [](string& a, string& b) { return a + b > b + a; });
        // check 0 value
        if (result[0] == "0")
            return "0";

        // store all values in string now
        string ans;
        for (auto it : result) {
            ans += it;
        }
        return ans;
    }
};
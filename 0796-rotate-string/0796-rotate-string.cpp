class Solution {
public:
    bool rotateString(string s, string goal) {
        // base case
        if (s.size() != goal.size()) {
            return false;
        }
        string combo = s + s;

        return combo.find(goal)!=string::npos;
    }
};
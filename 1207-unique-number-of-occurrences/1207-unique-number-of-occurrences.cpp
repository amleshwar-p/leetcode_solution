class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;

        for (auto num : arr) {
            mp[num]++; // [ 1-3 , 2-2 , 3-1]
        }
        for (auto x : mp) {
            if (x.second > 1) {
                return true;
            }
        }
        return false;
    }
};
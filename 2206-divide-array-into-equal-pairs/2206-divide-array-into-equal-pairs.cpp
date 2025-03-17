class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for (auto num : nums) {
            mp[num]++;
        }

        // count pairs
        int pairs = 0;
        for (auto x : mp) {
            pairs += x.second / 2;
        }

        return (pairs == n / 2);
    }
};
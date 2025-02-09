class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<long, int> mp;
        long long s = nums.size();
        
        for (long i = 0; i < s; i++) {
            mp[nums[i] - i]++;
        }
        
        long long  goodPairs = 0;
        for (auto &i : mp) {
            long long n = i.second;
            goodPairs += (n - 1) * n / 2; // Count good pairs
        }
        
        return s * (s - 1) / 2 - goodPairs; // Total pairs - good pairs
    }
};
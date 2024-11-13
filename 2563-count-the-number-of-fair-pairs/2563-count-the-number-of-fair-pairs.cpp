class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        long long count = 0;
        
        for (int i = 0; i < n; i++) {
            int lwr = lower - nums[i];
            int upr = upper - nums[i];
            
            // Finding the range of elements that satisfy the sum within [lower, upper]
            auto low_it = lower_bound(nums.begin() + i + 1, nums.end(), lwr);
            auto up_it = upper_bound(nums.begin() + i + 1, nums.end(), upr);
            
            count += (up_it - low_it);  // Counting valid pairs
        }
        
        return count;
    }
};

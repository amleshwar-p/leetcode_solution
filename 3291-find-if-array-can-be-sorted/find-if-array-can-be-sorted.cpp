class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                // check if val is larger then prev one
                if (nums[j] < nums[i]) {
                    // check if there bits are equal
                    if (__builtin_popcount(nums[i]) !=
                        __builtin_popcount(nums[j])) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
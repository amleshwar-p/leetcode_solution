class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[i]) {
                    if (__builtin_popcount(nums[i]) !=__builtin_popcount(nums[j])) {
                        return false;
                    }
                    swap(nums[i], nums[j]);
                }
            }
        }

        return true;
    }
};
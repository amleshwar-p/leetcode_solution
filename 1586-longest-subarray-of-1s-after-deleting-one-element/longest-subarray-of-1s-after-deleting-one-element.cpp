class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int zCount = 0;
        int maxCount = 0;

        int l = 0;
        for (int r = 0; r < n; r++) {
            if (nums[r] == 1) {
                count++;
            }
            if (nums[r] == 0) {
                zCount++;
            }
            while (zCount > 1) {
                if (nums[l] == 0) {
                    zCount--;
                } else {
                    count--;
                }
                l++;
            }
            maxCount = max(maxCount, count);
        }
        return maxCount == n ? maxCount - 1 : maxCount;
    }
};
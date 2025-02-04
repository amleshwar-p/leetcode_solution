class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int result = 0;
        int n = nums.size();
        for (int i = 0, j; i < n;) {
            int ab = nums[i];
            for (j = i + 1; j < n && nums[j] > nums[j - 1]; j++) {
                ab += nums[j];
            }
            result = max(result, ab);
            i = j;
        }
        return result;
    }
};
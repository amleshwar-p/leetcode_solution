class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int initSum = accumulate(nums.begin(), nums.begin() + k, 0);
        int maxSum = initSum;
        int n = nums.size();

        for (int i = k; i < n; ++i) {
            initSum = initSum - nums[i - k] + nums[i];
            maxSum = max(maxSum, initSum);
        }
        return (double)maxSum / k;
    }
};
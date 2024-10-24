class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int initSum = accumulate(nums.begin(), nums.begin() + k, 0);
        int n = nums.size();
        int maxSum = initSum;

        // add now after 1st window
        for (int i = k; i < n; i++) {
            // update init sum at each window
            initSum = initSum - nums[i - k] + nums[i];

            maxSum = max(maxSum, initSum);
        }
        return (double)maxSum/k;
    }
};
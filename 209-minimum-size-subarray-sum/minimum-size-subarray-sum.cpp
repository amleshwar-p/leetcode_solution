class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int n = nums.size();
        int minSum = INT_MAX;
        int currSum = 0;
        int start = 0;

        for (int end = 0; end < n; end++) {
            currSum += nums[end];

            while (currSum >= target) {
                minSum = min(minSum, end - start + 1);
                currSum -= nums[start];
                start++;
            }
        }
        if (minSum == INT_MAX) {
            return 0;
        }
        return minSum;
    }
};
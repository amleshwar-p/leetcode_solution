class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        int sum = 0;

        int i = 0, j = 0;
        while (j < n) {
            sum += nums[j];
            j++;

            while (sum >= target) {
                sum -= nums[i];
                i++;
                ans = min(ans, j - i + 1);
            }
        }
        return (ans == INT_MAX) ? 0 : ans;
    }
};
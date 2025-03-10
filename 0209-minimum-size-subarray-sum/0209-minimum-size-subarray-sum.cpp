class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int n = nums.size();
        int window = 0;
        int ans = INT_MAX;
        int start = 0;

        for (int end = 0; end < n; end++) {
            // at first update you right pointer;
            window += nums[end];
            // if condition matched
            while (window >= target) {
                ans = min(ans, end - start + 1);
                window -= nums[start];
                start++;
            }
        }
        return ans == INT_MAX ? 0:ans;
    }
};
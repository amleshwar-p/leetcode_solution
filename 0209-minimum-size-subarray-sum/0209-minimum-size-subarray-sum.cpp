class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int res = INT_MAX;
        int sum = 0;

        int i = 0, j = 0;
        while (j < n) {
            sum += nums[j];
            j++;

            while (sum >= target) {
                sum -= nums[i];
                i++;
                res = min(res,j - i+1);
            }
        }
        return (res== INT_MAX) ? 0 : res;
    }
};
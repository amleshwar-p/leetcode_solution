class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int count = 0;
        int j = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                count++;
            }
            // if count> then k
            while (count > k) {
                if (nums[j] == 0) {
                    count--;
                }
                j++;
            }
            ans = max(ans, i - j + 1);
        }
        return ans;
    }
};
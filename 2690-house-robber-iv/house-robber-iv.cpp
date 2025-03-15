class Solution {
public:
    bool canRob(vector<int>& nums, int k, int mid) {
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] <= mid) {
                count++;
                i++;
            }
        }
        return count >= k;
    }
    int minCapability(vector<int>& nums, int k) {
        int left = 0;
        int right = *max_element(nums.begin(), nums.end());
        int ans = right;

        while (left <= right) {
            int mid = (left + right) / 2;
            if (canRob(nums, k, mid)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};
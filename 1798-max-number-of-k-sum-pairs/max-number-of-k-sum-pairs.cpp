class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int operation = 0;
        int l = 0;
        int r = n - 1;

        while (l < r) {
            //[1,3,3,3,4]
            if (nums[l] + nums[r] == k) {
                operation++;
                l++;
                r--;
            } else if (nums[l] + nums[r] > k) {
                r--;
            } else {
                l++;
            }
        }
        return operation;
    }
};
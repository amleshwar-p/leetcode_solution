class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end()); // [1,2,4,6]
        int count = 0;

        int i = 0;
        int j = 0;
        while (j < n) {
            if (nums[j] - nums[i] <= 2 * k) {
                count = max(count, j - i + 1);
                j++;
            }else{
                i++;
            }
        }
        return count;
    }
};
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.end());       // 7654321
        reverse(nums.begin(), nums.begin() + k); // 5674321
        reverse(nums.begin() + k, nums.end());   // 5671234
    }
};
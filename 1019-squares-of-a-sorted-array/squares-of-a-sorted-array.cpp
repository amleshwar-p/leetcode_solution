class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v1;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            v1.push_back(nums[i] * nums[i]);
        }
        sort(v1.begin(), v1.end());
        return v1;
    }
};
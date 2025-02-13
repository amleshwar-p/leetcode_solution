class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v1;

        for (int i = 0; i < n - 1; i++) {
            for (int j = i+1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    v1.push_back(i);
                    v1.push_back(j);
                    break;
                }
            }
        }
        return v1;
    }
};
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> v1;
        v1.push_back(nums[0]);
        for (int i = 1; i < n; i++) {
            if (nums[i] != v1[v1.size() - 1]) {
                v1.push_back(nums[i]);
            }
        }
        long i = 0;
        while (i < v1.size() && v1[i] < 1) {
            i++;
        }
        long value = 1;
        while (i < v1.size() && v1[i] == value) {
            i++;
            value++;
        }
        return value;
    }
};
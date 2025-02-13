class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        vector<int> v1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (nums[i] > nums[j]) {
                    count++;
                }
            }
            v1.push_back(count);
            count = 0;
        }
        return v1;
    }
};
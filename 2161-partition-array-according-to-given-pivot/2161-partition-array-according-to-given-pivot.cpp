class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();

        vector<int> v1;

        for (int num : nums) {
            if (num < pivot) {
                v1.push_back(num);
            }
        }
        for (int num : nums) {
            if (num == pivot) {
                v1.push_back(num);
            }
        }
        for (int num : nums) {
            if (num > pivot) {
                v1.push_back(num);
            }
        }
        return v1;
    }
};
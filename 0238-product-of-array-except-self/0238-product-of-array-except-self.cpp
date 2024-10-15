class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> res(nums.size(), 1);

        int leftProduct = 1; // left to right
        for (int i = 0; i < nums.size(); i++) {
            res[i] = leftProduct;   // leftp values at res 1
            leftProduct *= nums[i]; // update leftp
        }

        int rightProduct = 1; // right to left
        for (int i = nums.size() - 1; i >= 0; i--) {
            res[i] *= rightProduct;  // multiply by all right values
            rightProduct *= nums[i]; // update rightp
        }
        return res;
    }
};
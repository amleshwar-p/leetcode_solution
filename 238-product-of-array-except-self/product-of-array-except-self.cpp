class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);

        // left products
        int leftP = 1;
        for (int i = 0; i < n; i++) {
            res[i] = leftP;   // leftp store krdo 1 pe
            leftP *= nums[i]; // left update
        }
        int rightP = 1;
        for (int i = n - 1; i >= 0; i--) {

            res[i] *= rightP; // last prod se multiply
            rightP *= nums[i]; // and right update
        }

        return res;
    }
};
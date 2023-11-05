class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target; // Initialize an empty vector to store the target array.
        int n = nums.size(); // Get the size of the input arrays.

        for (int i = 0; i < n; i++) {
            target.insert(target.begin() + index[i], nums[i]);
            // Insert the number from 'nums' at the specified index from 'index'.
        }

        return target; // Return the final target array.
    }
};

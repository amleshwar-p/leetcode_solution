class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // base
        if (nums.size() <= 2) {
            return nums.size();
        }

        int count = 2;

        for (int i = 2; i < nums.size(); i++) {
            if (nums[i] != nums[count - 2]) {
                // check ki at most 2 value se zyada to nahi equal
                nums[count] = nums[i];
                count++;
            }
        }
        return count;
    }
};
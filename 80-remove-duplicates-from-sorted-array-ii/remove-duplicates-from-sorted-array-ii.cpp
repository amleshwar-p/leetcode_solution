class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.size() <= 2) {
            return nums.size();
        }
        int ans = 2;
        for (int i = 2; i < nums.size(); i++) {
            // check ki pehle ki 2  atmost values hai
            if (nums[i] != nums[ans - 2]) {
                nums[ans] = nums[i];
                ans++;
            }
        }
        return ans;
    }
};
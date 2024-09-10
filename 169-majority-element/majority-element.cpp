class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int ans = 0;

        for (int i : nums) {
            if (i == ans) {
                count++;
            } else if (count == 0) {
                ans = i;
                count =0;
            } else {
                count--;
            }
        }

        return ans;
    }
};
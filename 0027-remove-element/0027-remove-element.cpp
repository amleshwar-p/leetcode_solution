class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            if (val != nums[i]) {
                nums[ans] = nums[i];
                ans++;
            }
        }
        return ans; 
    }
};
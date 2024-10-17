class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int n = nums.size();
        // sort(nums.begin(), nums.end());
        int left =0;
        

        for (int end = 0; end < n; end++) {
            
            if(nums[end]!=0){
                swap(nums[end], nums[left]);
                left++;
            }
                       
            
        }
    }
};
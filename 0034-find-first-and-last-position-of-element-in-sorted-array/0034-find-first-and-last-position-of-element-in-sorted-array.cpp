class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        int left=0;
        int right=nums.size()-1;

        while(left<=right){
            if(nums[left]<target){
                left=left+1;
            }else if(nums[right]>target){
                right=right-1;
            }else if(nums[left]==target && nums[right]== target){
                v.push_back(left);
                v.push_back(right);
                return {left,right};
            }
        }
        return {-1,-1};
    }
};
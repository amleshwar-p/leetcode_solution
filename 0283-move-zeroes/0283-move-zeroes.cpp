class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0;
        int n= nums.size();

        for(int r =0;r<n;r++){
            if(nums[r]!=0){
                swap(nums[l],nums[r]);
                l++;
                
            }
        }
        for(l;l<n;l++){
            nums[l]=0;
        }

        
    }
};
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        int n = nums.size();

        for(int i =0;i<n;i++){
            v.push_back(nums[i]*nums[i]);
            
        }
        sort(v.begin(),v.end());

        return v;
    }
};
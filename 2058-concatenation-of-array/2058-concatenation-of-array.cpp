class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> v1;
        for(int i=0;i<n;i++){
            v1.push_back(nums[i]);
        
                }
         for(int j=0;j<n;j++){
            v1.push_back(nums[j]);
        }
        return v1;
    }
};
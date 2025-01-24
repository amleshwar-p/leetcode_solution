class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        vector<int> ans;
        for(int j=1;j<=nums.size();++j){
            if(i>= nums.size() || nums[i]!=j){
                ans.push_back(j);
            }else{
                while(i<nums.size() && nums[i]==j)i++;
            }
        }
        return ans;
    }
};
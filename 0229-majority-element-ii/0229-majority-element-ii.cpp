class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int div=nums.size()/3;
        unordered_map<int,int>mp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            if(i.second>div)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
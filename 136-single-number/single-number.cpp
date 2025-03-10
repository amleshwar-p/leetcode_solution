class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        unordered_map<int, int> mp;
        for (auto num : nums) {
            mp[num]++;
        }
        for (auto x : mp) {
            if(x.second == 1){
                count = x.first;
            }
        }
        return count;
    }
};
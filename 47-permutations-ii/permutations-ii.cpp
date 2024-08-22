
class Solution {
private:
    void solve(vector<int> nums, vector<vector<int>>& ans, int index) {

        // base
        if (index >= nums.size()) {
            ans.push_back(nums);
            return;
        }
        unordered_set<int>final;
        for (int i = index; i < nums.size(); i++) {
            if (final.find(nums[i]) != final.end()) continue;  
            final.insert(nums[i]);
            swap(nums[index], nums[i]);
            solve(nums, ans, index + 1);
        }
    }

public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;

        solve(nums, ans, index);
        return ans;
    }
};
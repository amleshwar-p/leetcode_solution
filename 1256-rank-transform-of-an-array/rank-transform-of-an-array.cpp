class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        int n = arr.size();
        int rank = 1;
        map<int, int> mp;
        for (auto it : arr) {
            mp[it]++;
        }
        for (auto it : mp) {
            mp[it.first] = rank++;
            // rank++;
        }
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};
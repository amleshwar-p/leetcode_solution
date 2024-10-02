class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        int rank = 1;
        vector<int> result;

        map<int, int> mp;
        for (auto it : arr) {
            mp[it]++;
        }
        // rank assign
        for (auto it : mp) {
            mp[it.first] = rank;
            rank++;
        }
        // ab push krdo final values
        for (int i = 0; i < n; i++) {
            result.push_back(mp[arr[i]]);
        }
        return result;

        // map  bnaya aur key value store kraya
        // ab rank assign krenge
    }
};
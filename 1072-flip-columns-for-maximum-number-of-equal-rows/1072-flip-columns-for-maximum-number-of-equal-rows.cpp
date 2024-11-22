class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        unordered_map<string, int> mp;

        for (auto row : matrix) {
            string temp = "";
            for (int i = 0; i < m; i++) {
                temp += (row[i] == row[0] ? '1' : '0');
            }
            mp[temp]++;
        }
        int ans = 0;
        for(auto it: mp){
            ans = max(ans, it.second);
        }
        return ans;
    }
};
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {

        int n = grid.size();
        int count = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                bool match = true;

                for (int x = 0; x < n; x++) {
                    if (grid[i][x] != grid[x][j]) {
                        match = false;
                        break;
                    }
                }
                if (match) {
                    ans++;
                }
            }
        }
        return ans;
    }
};
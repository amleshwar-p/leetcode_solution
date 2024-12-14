class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();

        int ans = 0;

        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n; col++) {

                bool match = true; // check if matched

                for (int x = 0; x < n; x++) {
                    if (grid[row][x] != grid[x][col]) {
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
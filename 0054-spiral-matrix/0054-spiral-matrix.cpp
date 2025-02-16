class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();    // rows
        int n = matrix[0].size(); // cols

        int dir = 0;
        /*
         dir 0 -> left to right
         dir 1 -> top to down
         dir 2 -> right to left
         dir 3 -> down to top
        */

        int top = 0;
        int down = m - 1;
        int left = 0;
        int right = n - 1;

        vector<int> ans;

        while (ans.size() < (m * n)) {

            if (dir == 0) {
                // left to right
                // row fixed
                for (int i = left; i <= right; i++) {
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }
            if (dir == 1) {
                // top to down
                //  col fixed
                for (int i = top; i <= down; i++) {
                    ans.push_back(matrix[i][right]);
                }
                right--;
            }
            if (dir == 2) {
                // right to left
                //  row fixed
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[down][i]);
                }
                down--;
            }
            if (dir == 3) {
                // down to top
                // col fixed
                for (int i = down; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            dir++;
            if (dir == 4) {
                dir = 0;
            }
        }
        return ans;
    }
};

class Solution {
public:
    int nCr(int n, int r) {
        int result = 1;
        for (int i = 0; i < r; i++) {
            result = result * (n - i);
            result = result / (i + 1);
        }
        return result;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int row = 0; row < numRows; row++) {
            vector<int> temp;

            for (int col = 0; col <= row; col++) {
                temp.push_back(nCr(row, col));
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

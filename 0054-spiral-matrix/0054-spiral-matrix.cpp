class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> v;
        int row = matrix.size();
        int col = matrix[0].size();
        int count = 0;
        int totalCount = row * col;

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;

        while (count < totalCount) {

            // print starting row
            for (int i = startingCol;i <= endingCol; i++) {
                v.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            // Print end col
            for (int index = startingRow; count < totalCount && index <= endingRow; index++) {
                v.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            // print last row rev
            for (int index = endingCol;count < totalCount && index >= startingCol; index--) {
                v.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            // print start col rev
            for (int index = endingRow; count < totalCount && index >= startingRow; index--) {
                v.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return v;
    }
};
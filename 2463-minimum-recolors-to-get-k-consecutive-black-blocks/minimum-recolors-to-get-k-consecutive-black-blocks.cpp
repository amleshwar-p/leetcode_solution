class Solution {
public:
    int minimumRecolors(string blocks, int k) {

        int n = blocks.length();

        int countB = 0;
        int maxB = 0;

        for (int i = 0; i < n; i++) {
            if (blocks[i] == 'B') {
                countB++;
            }
            if ((i >= k) && blocks[i-k] == 'B') {
                countB--;
            }
            maxB = max(countB, maxB);
        }
        return k - maxB;
    }
};
class Solution {
public:
    int largestCombination(vector<int>& candidates) {

        int n = candidates.size();
        int maxCount = 0;
        vector<int> bitCount(32, 0); // store bits

        for (int num : candidates) {
            for (int i = 0; i < 32; i++) {

                if (num & (1 << i)) { // check if 1 is present at ith position
                    bitCount[i]++;
                }
                maxCount = max(maxCount, bitCount[i]);
            }
        }
        return maxCount;
    }
};
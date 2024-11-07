class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int n = candidates.size();
        vector<int> bit_count(32, 0); // store bits

        int count = 0;
        int maxCount = 0;
        for (int num : candidates) {
            for (int i = 0; i < 32; i++) {
                if (num & (1 << i)) { // Check if the i-th bit is "1" in num
                    bit_count[i]++;
                    count++;
                }
                maxCount = max(maxCount, bit_count[i]);
            }
        }
        return maxCount;
    }
};
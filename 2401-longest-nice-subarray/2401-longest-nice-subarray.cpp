class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        // sort(nums.begin(),nums.end());
        int count = 0;
        int maxCount = 0;
        for (int start = 0, end = 0; end < n; end++) {
            // agar last val present hai
            while (maxCount & nums[end]) {
                maxCount ^= nums[start++]; // xor use kiya to remove start val
            }
            maxCount |= nums[end]; // and operator to add vals
            // update krdo max count ko
            count = max(count, end - start + 1);
        }
        return count;
    }
};

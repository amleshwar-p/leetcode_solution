class Solution {
public:
    int trap(vector<int>& height) {
        int totalSum = 0;
        int n = height.size();
        vector<int> leftSum(n);
        vector<int> rightSum(n);

        // traverse left
        leftSum[0] = height[0];
        for (int i = 1; i < n; i++) {
            leftSum[i] = max(leftSum[i - 1], height[i]);
        }
        // traverse right
        rightSum[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightSum[i] = max(rightSum[i + 1], height[i]);
        }

        for (int i = 0; i < n; i++) {
            totalSum += min(leftSum[i], rightSum[i]) - height[i];
        }
        return totalSum;
    }
};
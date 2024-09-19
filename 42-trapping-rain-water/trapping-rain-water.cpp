class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();
        int totalSum = 0;
        int left = 0;
        int right = n-1;
        int leftMax = height[left];
        int rightMax = height[right];

        while (left < right) {
            if (leftMax < rightMax) {
                left++;
                leftMax = max(leftMax, height[left]);
                totalSum += leftMax - height[left];
            } else {
                right--;
                rightMax = max(rightMax, height[right]);
                totalSum += rightMax - height[right];
            }
        }
        return totalSum;
    }
};
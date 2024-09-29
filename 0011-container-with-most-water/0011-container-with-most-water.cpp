class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();
        int ans = 0;
        int left = 0;
        int right = n - 1;

        while (left < right) {
            // calculate area of water stored area that is (height* width)
            int area = min(height[left], height[right]) * (right - left);
            // if height is smaller than move it to next
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
            // store max value
            ans = max(ans, area);
        }
        return ans;
    }
};
// Two-pointer technique is the optimal way to solve this problem.
// You will use two pointers, one starting at the beginning (left)
//  and the other at the end (right) of the height array.

// You calculate the area formed by the lines at the left and right pointers by
// the formula: Area=min(height[left],height[right])×(right−left)

// Then, you move the pointer which has the smaller height, either left or
// right,
//   inward, because the smaller height is the limiting factor for the
//   container's water capacity.

// Keep updating the maximum area as you move the pointers.

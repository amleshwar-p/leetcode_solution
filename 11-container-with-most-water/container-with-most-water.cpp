class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();
        int ans = 0;
        int left = 0;
        int right = n - 1;

        while (left < right) {
            // calculate area of water stored ( height x width)
            int area = min(height[left], height[right]) * (right - left);
            // if height small so move to next
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
            // update and store max value
            ans = max(ans, area);
        }
        return ans;
    }
};
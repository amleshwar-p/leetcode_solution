class Solution {
public:
    int countValidSelections(vector<int>& nums) {

        int n = nums.size();
        int count = 0;
        // start from right

        for (int start = 0; start < n; ++start) {
            if (nums[start] != 0)
                continue;

            // move right
            vector<int> temp = nums; // copy of arr
            int direction = 1;
            int curr = start;

            while (curr >= 0 && curr < n) { 
                if (temp[curr] == 0) {
                    curr += direction; // Move in the current direction
                } else {
                    temp[curr] -= 1;   // Decrement the current position
                    direction *= -1;   // Reverse the direction
                    curr += direction; // Take a step in the new direction
                }
            }
            // Check temp is 0
            if (accumulate(temp.begin(), temp.end(), 0) == 0) {
                count++;
            }

            // move left
            temp = nums;
            direction = -1;
            curr = start;

            while (curr < n && curr >= 0) {
                if (temp[curr] == 0) {
                    curr += direction;
                } else {
                    temp[curr] -= 1;
                    direction *= -1;
                    curr += direction;
                }
            }
            // Check temp is 0
            if (accumulate(temp.begin(), temp.end(), 0) == 0) {
                count++;
            }
        }
        return count;
    }
};

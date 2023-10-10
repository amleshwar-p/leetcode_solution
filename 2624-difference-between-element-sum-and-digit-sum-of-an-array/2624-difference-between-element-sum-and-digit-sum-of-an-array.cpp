class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int totalSum = 0;
        int digitSum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            totalSum += nums[i];
            
            int currentNum = nums[i]; 
            
            while (currentNum > 0) {
                digitSum += currentNum % 10; 
                currentNum /= 10; 
            }
        }
        
        int result = abs(totalSum - digitSum);
        return result;
    }
};

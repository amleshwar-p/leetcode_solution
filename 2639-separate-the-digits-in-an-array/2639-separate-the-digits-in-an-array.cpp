class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> answer;
        int n = nums.size();
        reverse(nums.begin(),nums.end());
        
        for (int i=0;i<n;i++) {

            int num = nums[i];
            while (num > 0) {
                int digit = num % 10;  
                answer.push_back(digit);
                num /= 10;  
            }
        }
        reverse(answer.begin(),answer.end());
                
        return answer;
    }
};

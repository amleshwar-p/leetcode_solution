class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> ans;
        int n = prices.size();

        int maxValue = 0;

        for (int i = n - 1; i >= 0; i--) {
            if (maxValue < prices[i]) {
                maxValue = prices[i];
            }
            ans.push_back(maxValue);
        }
        reverse(ans.begin(),ans.end());
        int maxAns =0;

        for(int i =0;i<n;i++){
            if(ans[i] - prices[i]> maxAns){
                maxAns = ans[i]- prices[i];
            }
        }
        return maxAns;
        
    }
};
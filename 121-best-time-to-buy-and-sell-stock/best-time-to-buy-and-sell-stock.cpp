class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int startSum = INT_MAX;
        int maxProfit = 0;

        for (int i = 0; i < n; i++) {
            // find small stock
            startSum = min(startSum, prices[i]);

            //find max profit gained
            maxProfit = max(maxProfit, prices[i] - startSum);
        }
        return maxProfit;
    }
};
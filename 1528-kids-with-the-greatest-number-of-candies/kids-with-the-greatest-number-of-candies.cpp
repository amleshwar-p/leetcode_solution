class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> result(n, false);

        int maxVal = 0;
        for (int i = 0; i < n; i++) {
            maxVal = max(maxVal, candies[i]);
        }
        for (int i = 0; i < n; i++) {
            if (candies[i] + extraCandies >= maxVal) {
                result[i] = "true";
            }
        }
        return result;
    }
};
class Solution {
public:
    bool distri(int mid, vector<int>& quantities, int n) {
        for (int &products : quantities) {
            n -= (products + mid - 1)/mid;

            if (n < 0) {
                return false;
            }
        }
        return true;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {

        int m = quantities.size();

        // binary serch

        int l = 1;
        int r = *max_element(begin(quantities), end(quantities));
        int ans = 0;

        while (l <= r) {
            int mid = l+(r-l) / 2;

            if (distri(mid, quantities, n)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};
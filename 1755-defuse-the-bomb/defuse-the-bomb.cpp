class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n, 0);
        // base case for k = 0
        if (k == 0) {
            return ans;
        }
        int i = -1, j = -1;
        if (k > 0) {
            i = 1;
            j = k;

        } else {
            i = n - abs(k);
            j = n - 1;
        }
        // first window sum
        int winSum = 0;
        for (int x = i; x <= j; x++) {
            winSum += code[x];
        }

        for (int k = 0; k < n; k++) {
            ans[k] = winSum;

            winSum -= code[i % n];
            i++;
            winSum += code[(j+1)%n];
            j++;
        }

        return ans;
    }
};
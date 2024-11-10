class Solution {
public:
    void incWindow(int numb, vector<int>& v1) {
        for (int i = 0; i < 32; i++) {
            if ((numb >> i) & 1) {
                v1[i]++;
            }
        }
    }
    void decWindow(int numb, vector<int>& v1) {
        for (int i = 0; i < 32; i++) {
            if ((numb >> i) & 1) {
                v1[i]--;
            }
        }
    }

    int decimalValue(vector<int>& v1) {
        int numb = 0;

        for (int i = 0; i < 32; i++) {
            if (v1[i] > 0) { // if ith posi pe 1 hai
                numb |= (1 << i);
            }
        }
        return numb;
    }

    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = INT_MAX;
        int i = 0;
        int j = 0;

        vector<int> v1(32, 0);

        while (j < n) {
            incWindow(nums[j], v1);
            while (i <= j && decimalValue(v1) >= k) {
                ans = min(ans, j - i + 1);
                decWindow(nums[i], v1);

                i++;
            }
            j++;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};
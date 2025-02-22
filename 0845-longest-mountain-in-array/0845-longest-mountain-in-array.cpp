class Solution {
public:
    int longestMountain(vector<int>& arr) {
        // base
        if (arr.size() < 3) {
            return 0;
        }
        int ans = 0;
        int n = arr.size();
        for (int i = 1; i <= n - 2;) {
            // peak element
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                int count = 1;
                int j = i;
                // check left side
                while (j > 0 && arr[j] > arr[j - 1]) {
                    j--;
                    count++;
                }
                // check right side
                while (i < n - 1 && arr[i] > arr[i + 1]) {
                    i++;
                    count++;
                }
                ans = max(count, ans);
            } else {
                i++;
            }
        }
        return ans;
    }
};
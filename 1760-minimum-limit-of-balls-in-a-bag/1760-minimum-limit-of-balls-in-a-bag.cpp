class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int l = 1;
        int e = 1e9;

        while (l < e) {
            // take mid
            int mid = l + (e - l) / 2;

            int split = 0;

            for (auto x : nums) {
                split += (x - 1) / mid;
            }
            // move low
            if (split > maxOperations) {
                l = mid + 1;
            } else {
                e = mid;
            }
        }
        return l;
    }
};
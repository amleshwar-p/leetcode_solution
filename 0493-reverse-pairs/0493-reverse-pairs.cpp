class Solution {
public:
    int reversePairs(vector<int>& nums) {
        return mergeSortAndCount(nums, 0, nums.size() - 1);
    }
    
private:
    int mergeSortAndCount(vector<int>& nums, int l, int r) {
        if (l >= r) return 0;
        int mid = l + (r - l) / 2;
        int count = mergeSortAndCount(nums, l, mid) + mergeSortAndCount(nums, mid + 1, r);
        int j = mid + 1;
        for (int i = l; i <= mid; ++i) {
            while (j <= r && nums[i] > 2LL * nums[j]) {
                ++j;
            }
            count += j - (mid + 1);
        }
        merge(nums, l, mid, r);
        return count;
    }
    
    void merge(vector<int>& nums, int l, int mid, int r) {
        vector<int> temp(r - l + 1);
        int i = l, j = mid + 1, k = 0;
        while (i <= mid && j <= r) {
            if (nums[i] <= nums[j]) {
                temp[k++] = nums[i++];
            } else {
                temp[k++] = nums[j++];
            }
        }
        while (i <= mid) temp[k++] = nums[i++];
        while (j <= r) temp[k++] = nums[j++];
        for (int m = 0; m < temp.size(); ++m) {
            nums[l + m] = temp[m];
        }
    }
};
class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int total = n + m;
        int mid = total / 2;

        int i = 0, j = 0, count = 0;
        int prev = 0, curr = 0;

        // Merge until the median position
        while (count <= mid) {
            prev = curr;

            if (i < n && (j >= m || nums1[i] <= nums2[j])) {
                curr = nums1[i];
                i++;
            } else {
                curr = nums2[j];
                j++;
            }
            count++;
        }

        if (total % 2 == 0) {
            return (prev + curr) / 2.0; // Even case
        } else {
            return curr; // Odd case
        }
    }
};

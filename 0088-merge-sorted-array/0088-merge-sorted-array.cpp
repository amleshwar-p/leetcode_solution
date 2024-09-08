class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v1;
        int newSize = m + n;

        sort(nums1.begin(), nums1.end());
        for (int i = 0; i < n; i++) {

            if(nums1[i] == 0){
                nums1[i] = nums2[i];
            }
        }
        sort(nums1.begin(), nums1.end());
        return;       
        
    }
};
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());

        vector<int> unique_in_nums1, unique_in_nums2;

        set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),
                       back_inserter(unique_in_nums1));

        // Find elements in s2 that are not in s1
        set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(),
                       back_inserter(unique_in_nums2));

        // Combine the results into a vector of vectors
        return {unique_in_nums1, unique_in_nums2};

    }
};
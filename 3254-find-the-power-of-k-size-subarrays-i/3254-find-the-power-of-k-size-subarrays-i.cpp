class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
    vector<int> v1;  
    int n = nums.size();  

    for (int i = 0; i <= n - k; ++i) {
        bool isConsecutiveAndSorted = true;

        for (int j = i; j < i + k - 1; ++j) {
            if (nums[j] + 1 != nums[j + 1]) {
                isConsecutiveAndSorted = false;
                break;
            }
        }

        if (isConsecutiveAndSorted) {
            int maxElement = *max_element(nums.begin() + i, nums.begin() + i + k);
            v1.push_back(maxElement);
        } else {
            v1.push_back(-1);  // Otherwise, push -1
        }
    }

    return v1;
    }
};
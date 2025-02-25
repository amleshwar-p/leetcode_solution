class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> v1;
        int n = arr.size();
        sort(arr.begin(), arr.end());

        int res = abs(arr[1] - arr[0]);

        for (int i = 0; i < n - 1; i++) {
            int diff = abs(arr[i + 1] - arr[i]);
            if (diff < res) {
                res = diff; // Update the minimum difference
                v1.clear(); // Clear previously stored pairs
                v1.push_back({arr[i], arr[i + 1]}); // Add the current pair
            } else if (diff == res) {
                v1.push_back({arr[i], arr[i + 1]});
            }
        }

        return v1;
    }
};
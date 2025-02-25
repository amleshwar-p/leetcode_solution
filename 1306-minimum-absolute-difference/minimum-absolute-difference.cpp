class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> v1;

        sort(arr.begin(), arr.end());
        int res = arr[1] - arr[0];

        for (int i = 0; i < n - 1; i++) {
            int diff = abs(arr[i + 1] - arr[i]);
            if (diff < res) {
                res = diff;
                v1.clear();
                v1.push_back({arr[i], arr[i + 1]});
            } else if(diff == res) {
                v1.push_back({arr[i], arr[i + 1]});
            }
        }
        return v1;
    }
};
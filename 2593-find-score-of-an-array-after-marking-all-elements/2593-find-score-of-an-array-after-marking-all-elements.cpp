class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();

        vector < pair<int, int>> v1;

        for (int i = 0; i < n; i++) {
            v1.push_back({nums[i], i});
        }

        // now sort
        sort(v1.begin(), v1.end());

        long long score = 0;

        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++) {
            int element = v1[i].first;
            int index = v1[i].second;

            if (visited[index] == false) {
                visited[index] = true;
                score += element;

                // check adjacent
                if (index - 1 >= 0) {
                    visited[index - 1] = true;
                }
                if (index + 1 <= n) {
                    visited[index + 1] = true;
                }
            }
        }
        return score;
    }
};
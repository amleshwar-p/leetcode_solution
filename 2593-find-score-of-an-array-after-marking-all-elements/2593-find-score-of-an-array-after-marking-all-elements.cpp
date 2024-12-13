class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();

        vector<pair<int, int>> v1;
        // store in pair
        for (int i = 0; i < n; i++) {
            v1.push_back({nums[i], i});
        }
        sort(v1.begin(), v1.end());

        long long score = 0;

        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++) {
            int elmnt = v1[i].first;
            int indx = v1[i].second;

            if (visited[indx] == false) {
                visited[indx] = true;
                score += elmnt;

                if (indx - 1 >= 0) {
                    visited[indx - 1] = true;
                }
                if (indx + 1 < n) {
                    visited[indx + 1] = true;
                }
            }
        }
        return score;
    }
};
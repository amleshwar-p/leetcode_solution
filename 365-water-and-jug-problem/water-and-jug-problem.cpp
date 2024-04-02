class Solution {
public:
    bool solve(int cap1, int cap2, int water, int target,
               vector<int>& visited) {
        if (water > cap1 + cap2) {
            return false;
        }
        if (water < 0) {
            return false;
        }
        if (visited[water]) {
            return false;
        }
        visited[water] = true;
        if (water == target) {
            return true;
        }
        bool ans = false;
        ans = ans || solve(cap1, cap2, water + cap1, target, visited);
        ans = ans || solve(cap1, cap2, water - cap1, target, visited);
        ans = ans || solve(cap1, cap2, water + cap2, target, visited);
        ans = ans || solve(cap1, cap2, water - cap2, target, visited);
        return ans;
    }
    bool canMeasureWater(int cap1, int cap2, int target) {
        vector<int> visited(cap1 + cap2 + 1, 0);
        return solve(cap1, cap2, 0, target, visited);
    }
};
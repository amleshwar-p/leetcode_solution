class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        set<int> bannedSet(banned.begin(), banned.end());
        int ans = 0;
        int currSum = 0;

        for (int i = 1; i <= n; i++) { 
            if (bannedSet.find(i) == bannedSet.end() && currSum + i <= maxSum) { 
                currSum += i;
                ans++;
            } else if (currSum + i > maxSum) {
                break; // break
            }
        }
        return ans;
    }
};

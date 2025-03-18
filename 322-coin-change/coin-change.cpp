class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        // base
        if (amount == 0) {
            return 0;
        }
        sort(coins.rbegin(), coins.rend()); // desc mai sort kro
        queue<pair<int, int>> q;    // que mai store kro { rem amount , steps}
        unordered_set<int> visited; // visistes check kro

        q.push({amount, 0});
        visited.insert(amount);

        while (!q.empty()) {
            auto [currAmount, steps] = q.front();
            q.pop();

            for (int coin : coins) {
                int newAmount = currAmount - coin;

                if (newAmount == 0)
                    return steps +
                           1; // Agar `0` aagaya, toh yahi minimum answer hai
                if (newAmount > 0 && visited.find(newAmount) == visited.end()) {
                    q.push({newAmount, steps + 1});
                    visited.insert(newAmount);
                }
            }
        }
        return -1;
    }
};
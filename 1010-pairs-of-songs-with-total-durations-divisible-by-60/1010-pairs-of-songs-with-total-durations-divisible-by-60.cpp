class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n = time.size();
        vector<int> count(60, 0);
        int ans = 0;
        for (int i : time) {
            int rem_a = i % 60;           // rem of a will be seen % with 60
            int comp = (60 - rem_a) % 60; // compliement check of rem a

            ans += count[comp];
            count[rem_a]++;
        }
        return ans;
    }
};
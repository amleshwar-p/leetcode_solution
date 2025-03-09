class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int count = 0;

        unordered_set<int> s1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if((baskets[j] >= fruits[i]) && !s1.count(j)){
                    s1.insert(j);
                    count++;
                    break;
                }
            }
        }
        return n - count;
    }
};
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end()); 
        int m = potions.size();
        vector<int> ans;

        for (auto spell : spells) {
            
            int low = 0;
            int high = m - 1;
            while (low <= high) {

                int mid = low + (high - low) / 2;

                if ((long long)spell * potions[mid] >= success) {
                    high = mid - 1; 
                } else {
                    low = mid + 1; 
                }
            }
            ans.push_back(m - low);
        }
        return ans;
    }
};

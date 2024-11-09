class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;

        for (auto num : arr) {
            mp[num]++; // [ 1-3 , 2-2 , 3-1]
        }
        set<int> s1;
        for (auto x : mp) {
            s1.insert(x.second);
        }
        return s1.size() == mp.size();
    }
};
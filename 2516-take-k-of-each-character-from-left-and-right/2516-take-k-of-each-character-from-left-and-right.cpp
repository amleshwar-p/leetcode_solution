class Solution {
public:
    int takeCharacters(string s, int k) {
        int n = s.size();
        int j = 0;
        int ans = n;
        int wind = 0;
        unordered_map<char,int>mp;

        for(auto ch : s){
            mp[ch]++;
        }
        if(mp['a'] < k || mp['b'] < k || mp['c'] < k){
            return -1;
        }

        for(int i =0;i<n;i++){
            mp[s[i]]--;
            wind++;

            while(mp[s[i]] < k){
                mp[s[j++]]++;
                wind--;
            }
            ans = min(ans,n-wind);
        }
    return ans;
    }
};
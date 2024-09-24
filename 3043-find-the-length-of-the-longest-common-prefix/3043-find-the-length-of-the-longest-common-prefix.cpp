class Solution {
public:
    int length(int n) {
        string ans = to_string(n);
        return ans.size();
    }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int>user;

        for(auto it : arr1){
            while(it>0){
                user.insert(it);
                it /=10;
            }
        }
        int maxim = 0;
        for(auto it : arr2){
            while(it>0){
                if(user.find(it)!=user.end()){
                    maxim = max(maxim,length(it));
                    break;
                }
                it/=10;
            }
        }
        return maxim;
    }
};
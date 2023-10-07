class Solution {
public:
    int heightChecker(vector<int>& heights) {

        int ans=0;
        vector<int>expected;
        int n = heights.size();
        for(int i =0;i<n;i++){
            expected.push_back(heights[i]);
        }
        sort(expected.begin(),expected.end());
        for(int i =0;i<n;i++){
        if(heights[i]!=expected[i]){
            ans++;
        }
        }
        return ans;
        
    }
};
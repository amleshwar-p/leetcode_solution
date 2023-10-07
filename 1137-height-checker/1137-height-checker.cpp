class Solution {
public:
    int heightChecker(vector<int>& heights) {

        int ans=0;
        vector<int>v;
        int n= heights.size();
        for(int i=0;i<n;i++){
            v.push_back(heights[i]);
        }

        sort(v.begin(),v.end());

        for(int i =0;i<n;i++){
            if(heights[i]!=v[i]){
                ans++;
            }
        }
        return ans;
        
    }
};
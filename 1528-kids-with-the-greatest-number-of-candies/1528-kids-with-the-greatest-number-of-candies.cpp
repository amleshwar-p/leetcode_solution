class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool>answer(n,false);
        

        int maxCandy= *max_element(candies.begin(),candies.end());

        for(int i =0;i<n;i++){
            if(candies[i]+extraCandies>=maxCandy){
                answer[i]=true;
            }

        }
        return answer;
        
    }
};
class Solution {
public:
    int smallestEvenMultiple(int n) {

        if(n%2==0){
            return n;
        }
        int ans;
        ans= n*2;
        return ans;
        
    }
};
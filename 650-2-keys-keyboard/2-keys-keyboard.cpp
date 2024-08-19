class Solution {
public:
    int minSteps(int n) {
        if(n==1){
            return 0;
        }
        int copy = 2;
        int steps =0;

        while(n>1){
            while(n%copy == 0){
                steps += copy;
                n /= copy;
            }
            copy++;
        }
        return steps;
    }
};
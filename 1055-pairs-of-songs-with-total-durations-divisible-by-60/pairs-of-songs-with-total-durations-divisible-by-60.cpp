class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> value(60, 0);
        int count = 0;

        for (int i : time) {
            int rem = i % 60;
            int comp = (60 - rem) %  60;

            count += value[comp];

            value[rem]++;
        }
        return count;
    }
};
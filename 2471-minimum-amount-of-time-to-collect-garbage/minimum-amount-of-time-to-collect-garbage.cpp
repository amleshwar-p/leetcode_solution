class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size();
        int Pindex = 0;
        int Mindex = 0;
        int Gindex = 0;

        int timeTaken = 0;
        for (int i = 0; i < n; i++) {                     // check all houses
            for (int j = 0; j < garbage[i].size(); j++) { // check single house
                if (garbage[i][j] == 'M') {
                    Mindex = i;
                } else if (garbage[i][j] == 'P') {
                    Pindex = i;
                } else {
                    Gindex = i;
                }
                timeTaken++;
            }
        }
        for (int i = 1; i < travel.size(); i++) {
            travel[i] += travel[i - 1]; // add up all travel time defined
        }
        timeTaken += (Mindex > 0) ? travel[Mindex - 1] : 0;
        timeTaken += (Gindex > 0) ? travel[Gindex - 1] : 0;
        timeTaken += (Pindex > 0) ? travel[Pindex - 1] : 0;

        return timeTaken;
    }
};
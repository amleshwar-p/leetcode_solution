class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size();
        int Gindex = 0;
        int Pindex = 0;
        int Mindex = 0;
        int timeTravel = 0;

        for (int i = 0; i < n; i++) { // check whole garbage

            for (int j = 0; j < garbage[i].size(); j++) {
                // check specific material in garbage
                if (garbage[i][j] == 'M') {
                    Mindex = i;
                } else if (garbage[i][j] == 'P') {
                    Pindex = i;
                } else {
                    Gindex = i;
                }
                timeTravel++;
            }
        }
        for (int i = 1; i < travel.size(); i++) {
            travel[i] += travel[i - 1];
        }
        timeTravel += (Mindex > 0) ? travel[Mindex - 1] : 0;
        timeTravel += (Pindex > 0) ? travel[Pindex - 1] : 0;
        timeTravel += (Gindex > 0) ? travel[Gindex - 1] : 0;

        return timeTravel;
    }
};
class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int maxDist = 0;
        int minVal = arrays[0][0];
        int maxVal = arrays[0].back();
        
        for (int i = 1; i < arrays.size(); ++i) {
            int currentMin = arrays[i][0];
            int currentMax = arrays[i].back();
            
            maxDist = max(maxDist, abs(currentMax - minVal));
            maxDist = max(maxDist, abs(maxVal - currentMin));
            
            minVal = min(minVal, currentMin);
            maxVal = max(maxVal, currentMax);
        }
        
        return maxDist;
    }
};
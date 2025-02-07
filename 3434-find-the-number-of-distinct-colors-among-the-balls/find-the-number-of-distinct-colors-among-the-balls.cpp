class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> ball_color;
        unordered_map<int, int> color_count;
        int current_distinct = 0;
        vector<int> result;
        
        for (const auto& query : queries) {
            int x = query[0];
            int y = query[1];
            
            if (ball_color.find(x) != ball_color.end()) {
                int prev_color = ball_color[x];
                color_count[prev_color]--;
                if (color_count[prev_color] == 0) {
                    current_distinct--;
                }
            }
            
            if (color_count[y] == 0) {
                current_distinct++;
            }
            color_count[y]++;
            ball_color[x] = y;
            
            result.push_back(current_distinct);
        }
        
        return result;
    }
};
class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.length();
        vector<int> delta(n + 1, 0); // Difference array for range updates

        // Process each shift operation
        for (const auto& shift : shifts) {
            int start = shift[0], end = shift[1], direction = shift[2];
            int value = (direction == 1) ? 1 : -1;
            delta[start] += value;
            delta[end + 1] -= value;
        }

        // Compute prefix sum to get net shift for each character
        int netShift = 0;
        for (int i = 0; i < n; i++) {
            netShift += delta[i];
            // Normalize the shift within range [0, 25]
            int shift = (netShift % 26 + 26) % 26;
            s[i] = 'a' + (s[i] - 'a' + shift) % 26;
        }

        return s;
    }
};

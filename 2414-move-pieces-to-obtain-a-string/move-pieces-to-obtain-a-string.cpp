class Solution {
public:
    bool canChange(string start, string target) {
        if (start == target) {
            return true;
        }
        int s = 0;
        int e = 0;

        for (int i = 0; i < start.size(); i++) {
            char curr = start[i];
            char end = target[i];

            // check Right side
            if (curr == 'R') {
                if (s > 0) {
                    return false;
                }
                e++;
            }
            // check left side
            if (end == 'L') {
                if (e > 0) {
                    return false;
                }
                s++;
            }
            if (end == 'R') {
                if (e == 0) {
                    return false;
                }
                e--;
            }
            // check left side

            if (curr == 'L') {
                if (s == 0) {
                    return false;
                }
                s--;
            }
        }
        return s == 0 && e == 0;
    }
};
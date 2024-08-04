class Solution {
public:
    int reverse(int x) {
        int revNumb = 0;

        while (x) {
            if ((revNumb > INT_MAX/10) || (revNumb < INT_MIN/10)) {
                return 0;
            }
            int ans = x % 10;
            revNumb = (revNumb * 10) + ans;
            x = x / 10;
        }

        return revNumb;
    }
};
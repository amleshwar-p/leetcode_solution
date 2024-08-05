class Solution {
    public boolean isPalindrome(int x) {

        int numb = 0;
        int value = x;
        while (x > 0) {
            int ans = x % 10;
            numb = (numb * 10) + ans;

            x = x / 10;
        }
        if (numb != value) {
            return false;
        }
        return true;

    }
}
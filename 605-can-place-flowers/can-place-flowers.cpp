class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int x = flowerbed.size();

        for (int i = 0; i < x; i++) {
            // base case
            if (n == 0) {
                return true;
            }
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) &&
                (i == x - 1 || flowerbed[i + 1] == 0)) {
                // put a plant
                flowerbed[i] = 1;
                n--;
                if (n == 0) {
                    return true;
                }
            }
        }
        return false;
    }
};
class Solution {
public:
    int compress(vector<char>& chars) {

        int n = chars.size();
        int i = 0;
        int copy = 0; // use to overwrite

        while (i < n) {

            int count = 0;
            char currChar = chars[i]; //

            while (i < n && chars[i] == currChar) {
                i++;
                count++;
            }
            chars[copy++] = currChar;

            // count more than 1 convbert it to string
            if (count > 1) {
                for (char c : to_string(count)) {
                    chars[copy++] = c;
                }
            }
        }
        return copy;
    }
};
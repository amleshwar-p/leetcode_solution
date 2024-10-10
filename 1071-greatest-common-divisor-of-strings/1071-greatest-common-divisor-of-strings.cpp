class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string temp = "";
        if (str1 + str2 != str2 + str1) {
            return ""; // not common div
        }

        int gcdVal = gcd(str1.size(), str2.size());

        return str1.substr(0, gcdVal);
    }
};
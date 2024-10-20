class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> result;
        string temp = "";

        for (char c : target) {
            // start with a character
            temp += 'a';
            result.push_back(temp); // store it after pressing 1

            // increment last ch till matches target
            while (temp.back() != c) {
                temp.back()++; // press key 2
                result.push_back(temp);
            }
        }
        return result;
    }
};
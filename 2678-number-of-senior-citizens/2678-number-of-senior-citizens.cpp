class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(string word : details){

            int age = stoi(word.substr(11,2)); // store age of person

            if(age>60){
                count++;
            }
        }
        return count;
    }
};
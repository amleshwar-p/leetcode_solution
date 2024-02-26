class Solution {
private:
    bool validChar(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9')){
                return 1;
            }else{
                return 0;
            }
    }
    char toLower(char ch){
        if((ch>='a'&& ch<='z') || (ch>='0'&& ch<='9') ){
            return ch;
        }else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool palCheck(string a){

        int low=0;
        int high=a.length()-1;

        while(low<=high){
            if(a[low]!=a[high]){
                return 0;
            }else{
                low++;
                high--;
            }
        }
        return 1;

    }
public:
    bool isPalindrome(string s) {
        // remove useless characters
        string tmp ="";
        for(int j=0;j<s.length();j++){
            if(validChar(s[j])){
                tmp.push_back(s[j]);
            }
        }

        // convert to lowercase

        for(int i=0;i<tmp.length();i++){
            tmp[i] = toLower(tmp[i]);
        }

        // check palindrome

        return palCheck(tmp);
    }
};
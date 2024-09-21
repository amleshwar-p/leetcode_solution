class Solution {
public:
    string defangIPaddr(string address) { 
        string temp; 
        for(char ch : address){
            if(ch == '.'){
                temp+="[.]";
            }else{
                temp+=ch;
            }
        }
        return temp;

        
    }
};
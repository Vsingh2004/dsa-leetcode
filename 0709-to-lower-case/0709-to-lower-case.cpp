class Solution {
public:
    string toLowerCase(string s) {
        for(char &ch:s){
            if(isupper(ch)){
                ch = ch - 'A' +'a';
            }
        }

        return s;
    }
};
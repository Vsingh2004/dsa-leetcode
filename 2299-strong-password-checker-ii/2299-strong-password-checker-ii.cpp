class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if(password.length() < 8) return false;

        bool lower = false;
        bool upper = false;
        bool digit = false;
        bool special = false;

        for(int i=0; i<password.length(); i++){
            if(i > 0 && password[i] == password[i-1])
                return false;

            if(islower(password[i])){
                lower = true;
            }else if(isupper(password[i])){
                upper =true;
            }else if(isdigit(password[i])){
                digit =true;
            }else{
                special =true;
            }
        }

        return lower && upper && digit && special;

    }
};
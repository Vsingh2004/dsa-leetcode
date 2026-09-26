class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string cleaned = "";

        for(int i =0; i<n; i++){
            if(isalnum(s[i])){
                cleaned.push_back(tolower(s[i]));
            }
        }

        int low = 0;
        int high = cleaned.size() -1;

        while(low<=high){
            if(cleaned[low] != cleaned[high]){
                return false;
            }

            low++;
            high--;
        }

        return true;
    }
};
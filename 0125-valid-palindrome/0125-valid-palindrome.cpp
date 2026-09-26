class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();

        int left = 0;
        int right = n-1;

        while(left<right){
             // Skip non-alphanumeric characters from left
            while(left < right && !isalnum(s[left])) {
                left++;
            }

            // Skip non-alphanumeric characters from right
            while(left < right && !isalnum(s[right])) {
                right--;
            }

            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }

                left++;
                right--;

        }

    return true;
        
    }
};
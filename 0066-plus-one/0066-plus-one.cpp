class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        vector<int> ans;
        int carry = 1;

        for(int i = n-1; i>=0; i--){
            if(carry!=0){
                int sum = digits[i] + carry;
                ans.push_back(sum%10);

                carry = sum/10;
            }else{
                ans.push_back(digits[i]);
            }

        }

        if(carry!=0){
            ans.push_back(carry);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
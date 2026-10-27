class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        int depth = 0;
        string ans = "";

        for(int i = 0; i<n;i++){
            if(s[i] == '('){
              depth++;  
            }else{
                depth--;
            }

            if(s[i] == '(' && depth>1){
                ans.push_back(s[i]);
            }else if(s[i] == ')' && depth>0){
                ans.push_back(s[i]);
            }

        }

        return ans;
    }
};
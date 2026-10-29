class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();

        int depth = 0;
        int maxd = 0;

        for(int i=0; i<n; i++){
            if(s[i] == '('){
                depth++;
            }else if(s[i] == ')'){
                depth--;
            }

            maxd = max(maxd, depth);
        }

        return maxd;
    }
};
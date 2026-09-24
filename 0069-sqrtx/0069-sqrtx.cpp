class Solution {
public:
    int mySqrt(int x) {
        int ans = 0;
       long long int i =0;
        while(i*i<=x){
            ans = i;
            i++;
        }

        return ans;
    }
};
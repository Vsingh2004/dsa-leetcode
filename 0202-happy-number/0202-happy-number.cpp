class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> mp;

        while(n!=0){
            int sum = 0;
            while(n){
                int digit = n%10;
                int square = digit*digit;

                sum += square;
                n /=10;
            }

            n = sum;

            if(n == 1) return true;
            
            if(mp.find(n) != mp.end()) return false;

            mp[n]++;
        }

        return false;
    }
};
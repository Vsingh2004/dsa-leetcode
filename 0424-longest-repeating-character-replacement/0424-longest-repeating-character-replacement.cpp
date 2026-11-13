class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();

        unordered_map<char,int> mp;

        int low = 0;
        int maxFreq = 0;
        int maxLen = 0;

        for(int high =0; high<n; high++){
           int currFreq =  ++mp[s[high]];
        maxFreq = max(maxFreq, currFreq);

            int len = high - low +1;

            if(len - maxFreq > k){
                mp[s[low]]--;
                low++;
            }

            maxLen = max(maxLen, high - low +1);

        }

        return maxLen;
    }
};
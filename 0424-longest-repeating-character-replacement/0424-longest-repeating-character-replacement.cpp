class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();

        vector<int> arr(26,0);

        int low = 0;
        int maxFreq = 0;
        int maxLen = 0;

        for(int high =0; high<n; high++){
           int currFreq =  ++arr[s[high] - 'A'];
        maxFreq = max(maxFreq, currFreq);

            int len = high - low +1;

            if(len - maxFreq > k){
                arr[s[low] - 'A']--;
                low++;
            }

            maxLen = max(maxLen, high - low +1);

        }

        return maxLen;
    }
};
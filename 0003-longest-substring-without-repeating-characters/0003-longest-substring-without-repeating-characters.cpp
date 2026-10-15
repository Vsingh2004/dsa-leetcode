class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();

        unordered_map<char,int> mp;
        int low = 0;
        int maxL = 0;

        for(int high =0; high<n; high++){ 
            while(mp.find(s[high]) != mp.end()){
                mp.erase(s[low]);
                low++;
            }

            mp[s[high]]++;

            maxL = max(maxL,high-low+1);

        }

        return maxL;
    }
};
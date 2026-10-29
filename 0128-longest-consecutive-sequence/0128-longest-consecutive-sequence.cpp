class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
          if (nums.empty()) return 0;
          
        int n = nums.size();

        map<int,int> mp;

        for(int x:nums){
            mp[x]++;
        }

        auto it = mp.begin();
        int maxl = 1;

        while(it!=mp.end()){
            int length = 1;
            auto itn = next(it);

            if (itn == mp.end()) break;

            while(itn!=mp.end() && it->first + 1 == itn->first){
                length++;
                it++;
                itn++;
            }

            maxl= max(length,maxl);
            it++;
        }

        return maxl;
    }
};
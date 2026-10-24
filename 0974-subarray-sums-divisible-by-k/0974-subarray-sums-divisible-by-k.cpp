class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int,int> mp = {{0,1}};

        int sum = 0;
        int count = 0;

        for(int x:nums){
            sum += x;

            int rem = sum%k;
            if(rem<0) rem = rem + k;

            if(mp.find(rem) != mp.end()){
                count += mp[rem];
            }

            mp[rem]++;
        }

        return count;
    }
};
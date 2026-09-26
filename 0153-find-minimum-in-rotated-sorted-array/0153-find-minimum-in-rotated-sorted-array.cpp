class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;

        for(int x:nums){
            mp[x]++;
        }

        
        return mp.begin()->first;
    }
};
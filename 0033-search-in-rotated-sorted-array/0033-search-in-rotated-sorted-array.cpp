class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        unordered_map<int,int> mp;

        for(int i =0; i<n;i++){
            mp[nums[i]] = i;
        }

        if(mp.find(target) != mp.end()){
            return mp[target];
        }

        return -1;
    }
};
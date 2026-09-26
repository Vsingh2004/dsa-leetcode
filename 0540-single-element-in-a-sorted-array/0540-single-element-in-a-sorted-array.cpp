class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> freq;

        for(int x:nums){
            freq[x]++;
        }

        for(auto it:freq){
            if(it.second == 1){
                return it.first;
            }
        }

    return -1;
    }
};
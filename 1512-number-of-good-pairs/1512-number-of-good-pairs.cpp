class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> freq;

        int count = 0;

        for(int x: nums){
            if(freq.find(x) != freq.end()){
                count += freq[x];
            }

            freq[x]++;
        }

        return count;
    }
};
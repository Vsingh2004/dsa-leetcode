class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefixMap = {{0,1}};

        int currSum = 0;
        int count = 0;

        for(int x: nums){
            currSum += x;
            
            int reqSum = currSum - k;

            if(prefixMap.find(reqSum) != prefixMap.end()){
                count+= prefixMap[reqSum];
            }

            prefixMap[currSum]++;
        }

        return count;
    }
};
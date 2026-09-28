class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = 0;
        int sum =nums[high];
        int minLen = INT_MAX;

        while(high<n){
            if(sum>=target){
                minLen = min(minLen,high -low +1);
                sum -= nums[low];
                low++;
                continue;
            }else{
                high++;
            }

            if(high<n){
                 sum += nums[high];
            }

        }

        if(minLen == INT_MAX){
            return 0;
        }else{
            return minLen;
        }

    }
};
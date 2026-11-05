class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int lsum = 0;
        int rsum = 0;
        int tsum = 0;

        for(int x:nums){
            tsum += x;
        }

        for(int i=0; i<n; i++){
            rsum = tsum - lsum - nums[i];

            ans[i] = abs(lsum - rsum);

            lsum += nums[i];
        }

        return ans;
    }
};
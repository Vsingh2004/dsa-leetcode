class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        int low = 0;
        int sum = 0;

        for(int high=0; high<n; high++){
            sum += nums[high];
            ans.push_back(sum);
        }

        return ans;
    }
};
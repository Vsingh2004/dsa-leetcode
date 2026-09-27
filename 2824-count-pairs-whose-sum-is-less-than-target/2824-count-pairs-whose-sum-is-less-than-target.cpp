class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int count = 0;

        int low = 0;
        int high = n-1;
        while(low<high){
            int sum = nums[low] + nums[high];

            if(sum<target){
                count += high - low;
                low++;
            }else{
                high--;
            }
        }

        return count;
    }
};
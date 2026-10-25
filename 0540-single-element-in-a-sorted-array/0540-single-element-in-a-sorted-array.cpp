class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n =nums.size();

        int i =0;

        while(i<n){
            if(i+1>=n) break;
            
            if(nums[i] != nums[i+1]){
                return nums[i];
            }

            i += 2;
        }

        return nums[i];
    }
};
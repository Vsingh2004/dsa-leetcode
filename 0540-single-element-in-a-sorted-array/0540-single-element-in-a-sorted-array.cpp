class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n =nums.size();

        int i =0;
        int j =n-1;

        while(i<j && n>1){
            while(nums[i+1] == nums[i] && nums[j-1] == nums[j]){
                i+=2;
                j-=2;
            }

            if(nums[i+1] != nums[i]){
                return nums[i];
            }else{
                return nums[j];
            }


        }

        return nums[i];
    }
};
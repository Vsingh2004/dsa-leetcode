class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = 1;
        int unique = 1;
        while(high<n){
            if(nums[high] == nums[low]){
                high++;
            }else{
                nums[low+1] = nums[high];
            low++;
            unique++;
            high++;
            }
            
        }

        return unique;
        for(int i =0; i<unique; i++){
            cout<< nums[i] << ", ";
        }
    }
};
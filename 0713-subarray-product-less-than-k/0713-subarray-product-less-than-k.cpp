class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        
        int n = nums.size();
        int low = 0;
        long long int prod = 1;
        int cnt = 0;

        for(int high =0; high<n; high++){
            prod*= nums[high];

            while(prod>= k){
                if(low<n){
                    prod /= nums[low];
                    low++;
                }else{
                    break;
                }
            }

            if(prod<k){
            cnt += high - low +1;
            }

        }

        return cnt;
    }
};
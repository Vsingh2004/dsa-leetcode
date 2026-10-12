class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();

        int cnt = 0;

        for(int i =0; i<n; i++){
            if(i == n-1){
                if(nums[i] > nums[0]){
                    cnt++;
                }
                break;
            }

            if(nums[i] > nums[i+1]){
                cnt++;
            }
        }

        return cnt <= 1;
    }
};
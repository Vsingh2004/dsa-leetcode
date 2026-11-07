class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n =nums.size();

        int start = 1;
        int sum = 1;

        for(int x:nums){
            sum += x;

            while(sum <1){
                start++;
                sum++;
            }

        }

        return start;
    }
};
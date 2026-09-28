class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int low = 0;
        int sum = 0;
        double avg = 0;
        double maxAvg = INT_MIN;

        for(int high = 0; high<n; high++){
            sum += nums[high];
            avg = double(sum)/k;
            
            if(high-low+1 == k){
                maxAvg = max(maxAvg, avg);

                sum -= nums[low];

                low++;
            }
        }

    return maxAvg;
    }
};
class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0;
        int sum = 0;
        int minSum = INT_MAX;

        for(int high = 0; high<n;high++){
            sum += arr[high];

            if(high - low +1 == n-k){
                minSum = min(minSum, sum);
                sum-= arr[low];
                low++;
            }
        }

        int totalSum = 0;
        for(int i =0; i<n;i++){
            totalSum += arr[i];
        }

        if(minSum == INT_MAX){
            return totalSum;
        }else{
            return totalSum - minSum;
        }
    }
};
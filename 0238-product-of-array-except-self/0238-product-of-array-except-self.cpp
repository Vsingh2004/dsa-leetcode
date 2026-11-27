class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(n);

        // 1.) directly modifying ans with prefix product..

        int prefixProd = 1;
        for(int i = 0; i<n; i++){
            ans[i] = prefixProd;

            prefixProd *= nums[i];
        }

        // 2.) Modifying ans array with running suffixProduct...
        int suffixProd= 1;
        for(int j = n-1; j>=0; j--){
            ans[j] = suffixProd * ans[j];

            suffixProd *= nums[j]; 
        }

        return ans;
    }
};
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int> prefix;
        unordered_map<int,int> suffix;

        vector<int> ans;

        int prefixProd = 1;
        for(int i = 0; i<n; i++){
            prefix[i] = prefixProd;

            prefixProd *= nums[i];
        }

        int suffixProd= 1;
        for(int j = n-1; j>=0; j--){
            suffix[j] = suffixProd;

            suffixProd *= nums[j]; 
        }

        for(int i=0 ;i<n; i++){
            ans.push_back(prefix[i] * suffix[i]);
        }

        return ans;
    }
};
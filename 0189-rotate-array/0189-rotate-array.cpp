class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp;

        for(int i = n-(k%n); i<n; i++){
            temp.push_back(nums[i]);
        }

        for(int i =0; i<n-(k%n); i++){
            temp.push_back(nums[i]);
        }

        for(int i =0; i<n; i++){
            nums[i] = temp[i];
        }
    }
};
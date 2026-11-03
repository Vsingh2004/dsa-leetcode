class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();

        int largest = INT_MIN;

        for(int i =0; i<n; i++){
            largest = max(largest,nums[i]);
        }

        int moves =0;

        for(int x: nums){
            moves += largest - x;
        }

        return moves;
    }
};
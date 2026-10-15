class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map<int,int> types;

        int low = 0;
        int maxCnt = INT_MIN;

        for(int high=0; high<n; high++){
            types[fruits[high]]++;

            while(types.size()>2){
                types[fruits[low]]--;
                if (types[fruits[low]] == 0) {
                    types.erase(fruits[low]);
                }
                low++;
            }

            maxCnt = max(maxCnt,high-low+1);
            
        }

        return maxCnt;

    }
};
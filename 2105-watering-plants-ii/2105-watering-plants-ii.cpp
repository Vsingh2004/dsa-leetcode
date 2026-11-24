class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int n = plants.size();

        int a = 0;
        int b = n-1;
        int currcapA = capacityA;
        int currcapB = capacityB;
        int refill = 0;

        while(a<b){

            if(plants[a]>currcapA){
                currcapA = capacityA;
                refill++;
            }
            currcapA -= plants[a];
            a++;

            if(plants[b] > currcapB){
                currcapB = capacityB;
                refill++;
            }
            currcapB -= plants[b];
            b--;
        }

         // If one plant remains
        if (a == b) {
            if (currcapA >= currcapB) {
                if (currcapA < plants[a]) {
                    refill++;
                }
            }
            else {
                if (currcapB < plants[a]) {
                    refill++;
                }
            }
        }

        return refill;
    }
};
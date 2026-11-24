class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int n = plants.size();

        int a = 0;
        int b = n-1;
        int currcapA = capacityA;
        int currcapB = capacityB;
        int refill = 0;

        while(a<=b){
            if(a==b){
                if(currcapA > currcapB){
                    if(plants[a]>currcapA){
                      currcapA = capacityA;
                      refill++;
                    }
                  currcapA -= plants[a];
                  a++;
                  break;
                }else if(currcapA < currcapB){
                     if(plants[b] > currcapB){
                        currcapB = capacityB;
                        refill++;
                    }
                    currcapB -= plants[b];
                    b--;
                    break;
                }else{
                    if(plants[a]>currcapA){
                      currcapA = capacityA;
                      refill++;
                    }
                  currcapA -= plants[a];
                  a++;
                  break;
                }
            }

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

        return refill;
    }
};
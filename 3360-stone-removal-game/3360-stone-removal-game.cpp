class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;

        n = n-10;
        int chance = 2;
        int stonesToPick = 9;

        while(true){

            if(chance%2 ==0){
                if(stonesToPick > n) return true;
            }else{
                if(stonesToPick > n) return false;

            }

            n -= stonesToPick;
            stonesToPick--;
            chance++;

        }

        return false;
    }
};
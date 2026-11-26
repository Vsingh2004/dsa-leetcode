class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;

        n = n-10;
        int chance = 2;
        int stonesToPick = 9;

        while(true){
            if(stonesToPick > n){
                return (chance%2 == 0);
            }

            n -= stonesToPick;
            stonesToPick--;
            chance++;

        }

        return false;
    }
};
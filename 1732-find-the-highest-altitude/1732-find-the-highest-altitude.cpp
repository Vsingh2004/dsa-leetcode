class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();

        int ptr = 0;
        int alt = 0;
        int maximum = 0;

        for(int x:gain){
            alt += x;
            maximum = max(maximum, alt);
        }

        return maximum;

    }
};
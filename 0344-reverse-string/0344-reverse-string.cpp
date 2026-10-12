class Solution {
public:
    void recursive(vector<char> &s, int i, int j){
        if(i>=j) return;

        swap(s[i],s[j]);

        recursive(s,i+1, j-1);
    }


    void reverseString(vector<char>& s) {
        int n = s.size();
        int i =0;
        int j = n-1;
        recursive(s,i,j);

        for(int i =0; i<n;i++){
            cout << s[i] << ", ";
        }
    }
};
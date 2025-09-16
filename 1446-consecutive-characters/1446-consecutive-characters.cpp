class Solution {
public:
    int maxPower(string s) {
        int c = 1;
        int m = 1;
        for(int i = 0; i < s.size() - 1; i++){
            if(s[i] == s[i+1]){
                c++;
            }
            else{
                m = max(m,c);
                c = 1;
            }
        }
        return m;
    }
};
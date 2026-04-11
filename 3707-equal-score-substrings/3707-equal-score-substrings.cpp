class Solution {
public:
    bool scoreBalance(string s) {
        int n = s.length();
        if(n < 2){
            return false;
        }
        vector<int> p(n,0);
        p[0] = s[0] - 'a' + 1;
        for(int i = 1; i < n;++i){
            p[i] = p[i-1] + (s[i]-'a'+1);
        }
        int t = p[n-1];
        for(int i = 0; i < n-1; ++i){
            int l = p[i];
            int r = t- l;
            if(l == r){
                return true;
            }
        }
        return false;
    }
};
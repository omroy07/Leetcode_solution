class Solution {
public:
    int firstMatchingIndex(string s) {
        if(s.size() == 1){
            return 0;
        }
        int l = 0 , h = s.length() - 1;
        while(l <= h){
            if(s[l] == s[h]){
                return l;
            }
            l++;
            h--;
        }
        return -1;
    }
};
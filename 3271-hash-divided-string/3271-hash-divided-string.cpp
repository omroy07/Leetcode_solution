class Solution {
public:
    string stringHash(string s, int k) {
        int n = s.size();
        string sub = "";
        int x = 0;
        string ans = "";
        for(int i = 0; i < n ; i++){
            sub += s[i];
            x++;
            if(x == k){
                int j = 0;
                int ind = 0;
                while( j < x){
                    ind += sub[j]-'a';
                    j++;
                }
                ans += char((ind%26)+'a');
                sub = "";
                x = 0;
            }
        }
        return ans;
    }
};
class Solution {
public:
    string reversePrefix(string s, int k) {
        string ans = "";
        for(int i = k -1; i > -1;i--){
            ans += s[i];
        }
        for(int i = k; i < s.size();i++){
            ans += s[i];
        }
        return ans;
    }
};
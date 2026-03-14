class Solution {
public:
    string reverseByType(string s) {
        string letter =  "";
        string special = "";
        for(char c : s){
            if(c >= 'a' && c <='z'){
                letter += c;
            }
            else{
                special += c;
            }
        }
        reverse(letter.begin(),letter.end());
        reverse(special.begin(),special.end());
        string ans = "";
        int l = 0;
        int j = 0;
        for(char c : s){
           if(c >= 'a' && c <='z'){
                ans += letter[l++];
            }
            else{
                ans += special[j++];
            }
        }
        return ans;
    }
};
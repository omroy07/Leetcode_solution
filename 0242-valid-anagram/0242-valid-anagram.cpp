class Solution {
public:
    bool isAnagram(string s, string t) {
        int m= 0;
        if(s.length()!=t.length()){return false;}
        else if(s.length()==t.length()){
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            for(int i =0;i<s.length();i++){
                if(s[i]!=t[i]){
                    m++;
                }
            }
        }
    if(m>0){return false;}
    else{return true;}
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
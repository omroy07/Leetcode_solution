class Solution {
public:
    string removeStars(string s) {
        string c = "";
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '*'){
                c.pop_back();
            }
            else{
                c += s[i];
            }
        }
        return c;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna
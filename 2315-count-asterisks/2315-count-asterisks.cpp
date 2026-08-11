class Solution {
public:
    int countAsterisks(string s) {
        bool v = false;
        int star = 0;
        for(auto x : s){
            if(x == '*' &&  !v){
                star++;
            }
            else if(x == '|'){
                v = !v;
            }
        }
        return star;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
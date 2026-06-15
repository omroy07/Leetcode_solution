class Solution {
public:
    bool checkGoodInteger(int n) {
        int s = 0;
        int p = 0;
        while(n > 0){
            s += n%10;
            p += ((n%10)*(n%10));
            n /= 10;
        }
        if(p-s >49){
            return true;
        }
        else{
            return false;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
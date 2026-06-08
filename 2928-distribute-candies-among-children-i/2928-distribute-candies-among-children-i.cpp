class Solution {
public:
    int distributeCandies(int n, int limit) {
        int count=0;
        for(int i=0;i<=limit;i++){
            for(int j=0;j<=limit;j++){
                if((n-i-j)<=limit && (n-i-j)>=0){
                    count++;
                }
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
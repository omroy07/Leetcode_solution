class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n+1, 0);
        for(int i = 0; i < n ; i++){
            int cm  = 0 , cs = 0;
            for(int j  = i ; j >= max(0 , i - k+1);j--){
                cm = max(cm , arr[j]);
                int c = cm* ( i - j +1) + dp[j];
                cs = max(cs, c);
            }
            dp[i+1] = cs;
        }
        return dp[n];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
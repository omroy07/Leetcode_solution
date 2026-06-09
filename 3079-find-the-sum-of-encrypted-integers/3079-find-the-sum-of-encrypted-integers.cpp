class Solution {
public:
    int Encrypt(int n){
        int temp = n , m = 0;
        while(temp > 0){
            int d = temp%10;
            if(d>m){
                m = d;
            }
            temp /= 10;
        }
        int res = 0, p = 1;
        while(n>0){
            res += m * p;
            p *= 10;
            n /= 10;
        }
        return res;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int ans  = 0;
        for(int i = 0; i < nums.size();i++){
            ans += Encrypt(nums[i]);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
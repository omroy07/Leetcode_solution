class Solution {
public:
    int digitSum(int n){
        int s = 0;
        while(n>0){
            s += n%10;
            n = n/10;
        }
        return s;
    }
    int minElement(vector<int>& nums) {
        int m = INT_MAX;
        for(int i = 0; i<nums.size() ; i++){
            m = min(m,digitSum(nums[i]));
        }
        return m;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna
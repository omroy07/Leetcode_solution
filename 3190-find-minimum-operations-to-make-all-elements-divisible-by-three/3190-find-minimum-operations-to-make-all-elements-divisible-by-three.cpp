class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int c = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i]%3 != 0){
                c++;
            }
        }
        return c;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
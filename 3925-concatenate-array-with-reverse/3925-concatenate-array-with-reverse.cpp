class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = 2* nums.size();
        vector<int> ans(n);
        for(int i = 0 ; i < nums.size() ; i++){
            ans[i] = nums[i];
            ans[i + nums.size()] = nums[nums.size() - i - 1];
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna
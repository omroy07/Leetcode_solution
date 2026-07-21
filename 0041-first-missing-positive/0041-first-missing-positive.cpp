class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        nums.erase(remove_if(nums.begin(), nums.end(), [](int n) { return n <= 0; }), nums.end());
        sort(nums.begin(), nums.end());
        int target = 1;
        for (int n : nums) {
            if (n == target) {
                target++;
            } 
            else if (n > target) {
                return target;
            }
        }    
        return target;        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
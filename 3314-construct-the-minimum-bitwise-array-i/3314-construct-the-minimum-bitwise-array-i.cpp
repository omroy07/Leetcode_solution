class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        
        for (int num : nums) {
            if (num == 2) {
                ans.push_back(-1);
            } else {
                // Find the lowest 0 bit just after the trailing 1s of the modified number
                // A clever way to clear the lowest 1 bit in a consecutive block of 1s:
                // (~num) extracts the inverted bits. (~num) & (num + 1) isolates the bit to change.
                int t = num;
                // Keep shifting a mask to find the first '0' from the right in (num)
                // Or simply find the first bit where (num & (num + 1)) leaves a pattern.
                
                // A clean loop approach to find the first 0-bit from the right:
                int mask = 1;
                while ((num & mask) != 0) {
                    mask <<= 1;
                }
                // Shift right by 1 to target the lowest consecutive 1-bit
                mask >>= 1;
                
                // Flip that bit from 1 to 0
                ans.push_back(num ^ mask);
            }
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna
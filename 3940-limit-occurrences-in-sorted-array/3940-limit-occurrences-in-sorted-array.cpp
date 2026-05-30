class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int write = 0;

        for (int num : nums) {
            if (write < k || num != nums[write - k]) {
                nums[write++] = num;
            }
        }

        nums.resize(write);
        return nums;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna
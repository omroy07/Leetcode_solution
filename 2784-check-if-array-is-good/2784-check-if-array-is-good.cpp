class Solution {
public:
    bool isGood(vector<int>& nums) {
        int length = nums.size();
        sort(nums.begin(), nums.end());  // Sort the array

        // Check if first n-2 numbers are 1, 2, ..., n-2
        for (int i = 0; i < length - 2; i++) {
            if (nums[i] != (i + 1))
                return false;  // If a mismatch found, not good
        }

        // Check that last two numbers are both n-1
        return ((nums[length - 1] == length - 1) && (nums[length - 2] == length - 1));
    }
};
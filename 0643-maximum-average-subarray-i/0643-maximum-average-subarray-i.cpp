#include <vector>
#include <numeric>
#include <algorithm>

class Solution {
public:
    double findMaxAverage(std::vector<int>& nums, int k) {
        // Calculate the sum of the first 'k' elements to get the initial window sum.
        double current_sum = 0;
        for (int i = 0; i < k; ++i) {
            current_sum += nums[i];
        }

        double max_sum = current_sum;

        // Use a sliding window to find the maximum sum.
        for (int i = k; i < nums.size(); ++i) {
            // Add the new element entering the window and subtract the element leaving.
            current_sum = current_sum + nums[i] - nums[i - k];
            // Update the maximum sum found so far.
            max_sum = std::max(max_sum, current_sum);
        }

        // The maximum average is the maximum sum divided by 'k'.
        return max_sum / k;
    }
};
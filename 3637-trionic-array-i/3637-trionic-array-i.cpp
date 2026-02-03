class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 4) {
            return false;
        }
        for (int p = 1; p < n - 2; ++p) {
            bool isFirstSegmentIncreasing = true;
            for (int i = 0; i < p; ++i) {
                if (nums[i] >= nums[i+1]) {
                    isFirstSegmentIncreasing = false;
                    break;
                }
            }
            if (!isFirstSegmentIncreasing) {
                continue;
            }
            for (int q = p + 1; q < n - 1; ++q) {
                bool isSecondSegmentDecreasing = true;
                for (int i = p; i < q; ++i) {
                    if (nums[i] <= nums[i+1]) {
                        isSecondSegmentDecreasing = false;
                        break;
                    }
                }
                if (!isSecondSegmentDecreasing) {
                    continue;
                }
                bool isThirdSegmentIncreasing = true;
                for (int i = q; i < n - 1; ++i) {
                    if (nums[i] >= nums[i+1]) {
                        isThirdSegmentIncreasing = false;
                        break;
                    }
                }
                if (isThirdSegmentIncreasing) {
                    return true;
                }
            }
        }
        return false;
    }
};
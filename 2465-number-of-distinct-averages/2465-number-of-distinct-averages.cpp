class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        if (nums.size() <= 1) return 0;
        sort(nums.begin(), nums.end());  // Sort array
        set<double> uniqueAvg;

        int left = 0, right = nums.size() - 1;

        while (left < right) {
            double avg = (nums[left] + nums[right]) / 2.0;
            uniqueAvg.insert(avg);
            left++;
            right--;
        }

        return uniqueAvg.size();
    }
};
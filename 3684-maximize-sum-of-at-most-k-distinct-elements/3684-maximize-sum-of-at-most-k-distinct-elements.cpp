class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int> ans;
        sort(nums.begin(), nums.end());

        for (int i = nums.size() - 1; i >= 0 && ans.size() < k; i--) {
            if (ans.empty() || nums[i] != ans.back()) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};

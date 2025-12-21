class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long s = 0, p = 0;
        int n = nums.size();
        for(int i = 0; i < k; i++) {
            s += nums[i];    
            p += nums[n - 1 - i];
        }
        return abs(s-p);
    }
};
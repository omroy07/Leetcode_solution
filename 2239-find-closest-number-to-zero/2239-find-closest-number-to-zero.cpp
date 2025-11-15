class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int m = INT_MAX;
        int n = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(abs(nums[i]) <= m){
                m = abs(nums[i]);
                n = nums[i];
            }
        }
        return n;
    }
};
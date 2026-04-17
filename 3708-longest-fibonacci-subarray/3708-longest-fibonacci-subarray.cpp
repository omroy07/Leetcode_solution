class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        if(nums.size() < 3){
            return nums.size();
        }
        int m = 2;
        int c = 2;
        for(int i = 2; i < nums.size();i++){
            if(nums[i] == nums[i-1]+ nums[i-2]){
                c++;
            }
            else{
                c = 2;
            }
            m = max(m,c);
        }
        return m;
    }
};
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            for(int  j = i;j<nums.size();j++){
                if(original == nums[j]){
                    original = 2* original;
                }
            }
        }
        return original;
    }
};
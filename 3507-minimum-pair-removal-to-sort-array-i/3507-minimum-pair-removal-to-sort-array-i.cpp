class Solution {
public:
    bool isSorted(const vector<int>& nums){
        for(int i =1;i<nums.size();++i){
            if(nums[i] < nums[i-1]){
                return false;
            }
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int c = 0;
        while(!isSorted(nums)){
            int ms = INT_MAX;
            int mi = -1;
            for(int i =0 ;i< nums.size()-1;i++){
                int sum = nums[i]+nums[i+1];
                if(sum<ms){
                    ms = sum;
                    mi = i;
                }
            }
            int m = nums[mi]+nums[mi+1];
            nums.erase(nums.begin()+mi);
            nums[mi] = m;
            ++c;
        }
        return c;
    }
};
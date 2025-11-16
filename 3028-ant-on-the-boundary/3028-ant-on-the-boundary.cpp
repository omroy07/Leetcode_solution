class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int cumsum = 0;
        int boundaryReturns = 0;
        for(int num : nums) {
            cumsum += num;
            if(num != 0 && cumsum == 0) {
                boundaryReturns++;
            }
        }
        return boundaryReturns;
    }
};
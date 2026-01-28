class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<bool> covered(102, false); 
        for (auto& interval : nums) {
            int start = interval[0];
            int end = interval[1];
            for (int i = start; i <= end; i++) {
                covered[i] = true;
            }
        }
        int count = 0;
        for (int i = 1; i <= 100; i++) {
            if (covered[i]) count++;
        }
        return count;
    }
};
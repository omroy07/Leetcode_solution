class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int m = 0;
        long long sum = 0;
        for(int i : nums){
            m = max(m,i);
            sum += i;
        }
        long long moves = (long long)m*n - sum;
        return (int)moves;
    }
};
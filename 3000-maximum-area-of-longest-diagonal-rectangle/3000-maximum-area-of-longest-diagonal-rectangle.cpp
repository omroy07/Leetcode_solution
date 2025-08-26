class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int ans = 0;
        long long p = 0;
        for(int i = 0; i< dimensions.size();i++){
            long long m = (long long)dimensions[i][0] * dimensions[i][0] + (long long)dimensions[i][1] * dimensions[i][1];
            if(p < m){
                p = m;
                ans = dimensions[i][0]*dimensions[i][1];
            }
            else if(p == m){
                ans = max(ans,dimensions[i][0] * dimensions[i][1]);
            }
        }
        return ans;
    }
};
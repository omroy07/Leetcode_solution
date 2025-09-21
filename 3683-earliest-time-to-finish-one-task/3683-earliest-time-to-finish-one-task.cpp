class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int m = INT_MAX;
        for(int i = 0; i < tasks.size() ; i++){
            int m1 = tasks[i][0] + tasks[i][1];
            m = min(m,m1);
        }
        return m;
    }
};
// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         vector<vector<int>> p;
//         // for(int i = 0;i<intervals.size()-1;i++){
//         //     if(intervals[i][1] >= intervals[i+1][0]){
//         //         p.push_back({intervals[i][0],intervals[i+1][1]});
//         //     }
//         // }
//         return p;
//     }
// };

// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
//             return a[0] < b[0];
//         });
//         vector<vector<int>> merged;
//         vector<int> prev = intervals[0];
//         for (int i = 1; i < intervals.size(); ++i) {
//             vector<int> interval = intervals[i];
//             if (interval[0] <= prev[1]) {
//                 prev[1] = max(prev[1], interval[1]);
//             } 
//             else {
//                 merged.push_back(prev);
//                 prev = interval;
//             }
//         }
//         merged.push_back(prev);
//         return merged;        
//     }
// };

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();

        int l = intervals[0][0];
        int r = intervals[0][1];

        if(n == 1){
            return intervals;
        }
        vector<vector<int>> ans;
        int i;
        for(i = 1; i<n; i++){
             if(r <intervals[i][0]){
                ans.push_back({l, r});
                l = intervals[i][0];
                r = intervals[i][1];
             }
             else if(r >= intervals[i][0] && r<= intervals[i][1]){
                r = intervals[i][1];
             }
        }
        ans.push_back({l, r});;
        return ans;
    }
};
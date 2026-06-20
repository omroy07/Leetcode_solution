class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        unordered_map<int,vector<int>> map;
        int r = mat.size() , c = mat[0].size();
        for(int i = 0; i < r; i++){
            for(int j = 0 ; j < c ; j++){
                map[i-j].push_back(mat[i][j]);
            }
        }
        for(auto &i : map){
            sort(i.second.begin(),i.second.end(),greater<int> ());
        }
        for(int i = 0; i < r ;i++){
            for(int j = 0; j < c; j++){
                mat[i][j] = map[i-j].back();
                map[i-j].pop_back();
            }
        }
        return mat;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
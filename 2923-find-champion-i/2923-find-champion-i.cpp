class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int winner = 0;
        int n = grid.size();
        for(int i = 0; i < n; ++i){
            if(i == winner){
                continue;
            }
            if(grid[winner][i] == 0){
                winner = i;
            }
        }    
        return winner;
    }
};
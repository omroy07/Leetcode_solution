class Solution {
public:
    bool isSafe(int n, vector<string>& nQueens,int row, int col ){
        for(int i=0; i<n; i++) {
            if(nQueens[i][col] == 'Q') {
                return false;
            }
        }
        for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--) {
            if(nQueens[i][j] == 'Q') {
                return false;
            }
        }
        for(int i=row-1, j=col+1; i>=0 && j<n; i--, j++) {
            if(nQueens[i][j] == 'Q') {
                return false;
            }
        }
        return true;
    }
    void NQueens(int n , vector<vector<string>>& ans, vector<string>& nQueens , int row){
        if(row == n){
            ans.push_back(nQueens);
            return ;
        }
            for(int col = 0 ; col < n ; col++){
                if(isSafe(n,nQueens,row,col)){
                    nQueens[row][col] = 'Q';
                    NQueens(n,ans,nQueens,row+1);
                    nQueens[row][col] ='.';
                }
            }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> nQueens(n,string(n,'.'));
        NQueens(n,ans,nQueens,0);
        return ans;
    }
};
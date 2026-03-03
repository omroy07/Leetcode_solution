class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int e = 0;
        int o = 0;
        for(int p : position){
            if(p%2 == 0){
                e++;
            }
            else{
                o++;
            }
        }
        return min(o,e);
    }
};
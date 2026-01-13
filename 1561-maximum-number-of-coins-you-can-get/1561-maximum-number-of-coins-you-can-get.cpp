class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int l = 0;
        int r = piles.size() - 1;
        int sum  = 0;
        for (int i = 0; i < piles.size() / 3; i++) {
            r--;              
            sum += piles[r];   
            r--;        
            l++;               
        }
        return sum;
    }
};
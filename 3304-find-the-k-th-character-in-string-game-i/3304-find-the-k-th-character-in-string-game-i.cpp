class Solution {
public:
    char kthCharacter(int k) {
        int i = k - 1; 
        int inc = 0;
        while(i > 0){
            int p = 1;
            while(p * 2 <= i){
                p *= 2;
            }
            inc++; 
            i -= p; 
        }
        return 'a' + (inc % 26); 
    }
};
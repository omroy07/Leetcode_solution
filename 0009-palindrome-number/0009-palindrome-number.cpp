class Solution {
public:
    bool isPalindrome(int x) {
        long o = x;
        long c = 0;
        while(x>0){
            c=((c*10)+(x%10));
            x=x/10;   
        }
        return c==o;
    }
};
class Solution {
  public:
    bool isPerfect(int n) {
        // code here
        int s = 1;
        for(int i = 2 ; i*i < n; i++){
            if(n%i == 0){
                s += i;
                if (i * i != n) {
                    s += n / i;
                }
            } 
        } 
        return s == n;
    }
};
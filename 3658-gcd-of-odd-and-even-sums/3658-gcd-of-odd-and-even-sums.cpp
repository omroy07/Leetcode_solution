class Solution {
public:
    int GCD(int a, int b){
        if(a == 0){
            return b;
        }
        return GCD(b%a,a);
    }
    int gcdOfOddEvenSums(int n) {
        int o =0;
        int e = 0;
        for(int i = 1;i < n+1 ;i++){
            o += (2*i-1);
            e += (2*i);
        }
        cout<<o<<e;
        return GCD(o,e);
    }
};
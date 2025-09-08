class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
         // code here
        int oa1=a;
        int ob1=b;
        while(a%b!=0){
            int rem=a%b;
            a=b;
            b=rem;
        }
        int gcd=b;
        int lcm=(oa1*ob1)/gcd;
        return {lcm,gcd};
    }
};
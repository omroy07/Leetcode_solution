class Solution {
  public:
    int RecursivePower(int n, int p) {
        // Code here
        int s = 1;
        for(int i  = 0; i< p;i++){
            s *= n;
        }
        return s;
    }
};

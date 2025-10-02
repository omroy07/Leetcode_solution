class Solution {
public:
    int minimumChairs(string s) {
        int count = 0;
        int m  = 0;
        for(char c : s){
            if(c == 'E'){
                count++;
            }
            else{
                count--;
            }
            m = max(m,count);
        }
        return m;;
    }
};
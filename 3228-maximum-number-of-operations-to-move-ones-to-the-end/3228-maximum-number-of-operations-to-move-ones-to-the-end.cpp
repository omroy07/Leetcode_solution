class Solution {
public:
    int maxOperations(string s) {
        int count = 0 , n = s.size() , count1 = (s[0] == '1');
        for(int i = 1; i < n; i++){
            count1 += s[i] =='1';
            count += (-(s[i] == '0' && s[i-1] == '1'))&count1;
        }
        return count;
    }
};
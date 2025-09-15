class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int,int> ans;
        while(n > 0){
            ans[n%10]++;
            n /= 10;
        } 
        int minFrequency = INT_MAX;
        int leastFrequentDigit = -1;
        for (auto const& pair : ans) {
            int digit = pair.first;
            int frequency = pair.second;

            if (frequency < minFrequency) {
                minFrequency = frequency;
                leastFrequentDigit = digit;
            }
        }
        return leastFrequentDigit;
    }
};
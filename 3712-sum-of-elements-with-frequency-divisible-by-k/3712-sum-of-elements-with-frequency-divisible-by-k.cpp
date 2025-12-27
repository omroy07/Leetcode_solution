class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        vector<int> freq(101, 0);
        int s = 0;
        for(int num : nums){
            freq[num]++;
        } 
        for(int i = 0; i <= 100 ;i++){
            if(freq[i] != 0 && freq[i] % k == 0){
                s += i*freq[i];
            }
        }
        return s;
    }
};
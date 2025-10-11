class Solution {
private:
    bool checkPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        vector<int> storage(101, 0);
        for (int i : nums) {
            storage[i]++;
        }
        for (int freq : storage) {
            if (checkPrime(freq)) return true;
        }
        return false;
    }
};
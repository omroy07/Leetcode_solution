class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> freq;
        while (n > 0) {
            int digit = n % 10;
            freq[digit]++;
            n /= 10;
        }
        int score = 0;
        for (auto it : freq) {
            score += it.first * it.second;
        }
        return score;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna
#include <string>
using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int count = 0;

        // Function to count palindromes with the center at l and r
        auto countPalindromes = [&](int l, int r) {
            while (l >= 0 && r < n && s[l] == s[r]) {
                count++;
                l--;
                r++;
            }
        };

        // Expand around each center
        for (int i = 0; i < n; ++i) {
            // Count odd-length palindromes (single character center)
            countPalindromes(i, i);
            // Count even-length palindromes (consecutive characters center)
            countPalindromes(i, i + 1);
        }

        return count;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
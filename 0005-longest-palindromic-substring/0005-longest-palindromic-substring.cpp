#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";
        
        int start = 0, end = 0;

        // Function to expand around the center and update the longest palindrome
        auto expandAroundCenter = [&](int l, int r) {
            while (l >= 0 && r < n && s[l] == s[r]) {
                l--;
                r++;
            }
            // Adjust back to the last matching indices
            l++;
            r--;
            // Update the longest palindrome if the current one is longer
            if (r - l > end - start) {
                start = l;
                end = r;
            }
        };

        // Expand around each center
        for (int i = 0; i < n; ++i) {
            // Expand around a single character (odd-length palindromes)
            expandAroundCenter(i, i);
            // Expand around a pair of characters (even-length palindromes)
            expandAroundCenter(i, i + 1);
        }

        return s.substr(start, end - start + 1);
    }
};

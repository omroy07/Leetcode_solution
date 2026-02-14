class Solution {
public:
    int minSteps(string s, string t) {
        int counts[26] = {0};
        for (char c : s) {
            counts[c - 'a']++;
        }
        for (char c : t) {
            counts[c - 'a']--;
        }
        int steps = 0;
        for (int i = 0; i < 26; i++) {
            if (counts[i] > 0) {
                steps += counts[i];
            }
        }
        return steps;
    }
};
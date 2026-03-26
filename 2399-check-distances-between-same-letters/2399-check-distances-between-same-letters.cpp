class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int> firstIndex(26, -1);
        for (int i = 0; i < s.length(); i++) {
            int charIdx = s[i] - 'a';
            if (firstIndex[charIdx] == -1) {
                firstIndex[charIdx] = i;
            } 
            else {
                int actualGap = i - firstIndex[charIdx] - 1;
                if (actualGap != distance[charIdx]) {
                    return false;
                }
            }
        }
        return true;
    }
};
class Solution {
public:
    int maxFreqSum(const std::string& s) {
        int vowelFreq[26] = {0};
        int consonantFreq[26] = {0};
        std::string vowels = "aeiou";

        for(char ch : s) {
            if (vowels.find(ch) != std::string::npos) {
                vowelFreq[ch - 'a']++;
            } else {
                consonantFreq[ch - 'a']++;
            }
        }

        int maxVowel = *std::max_element(vowelFreq, vowelFreq + 26);
        int maxConsonant = *std::max_element(consonantFreq, consonantFreq + 26);

        return maxVowel + maxConsonant;
    }
};
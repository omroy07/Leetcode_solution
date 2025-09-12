#include <iostream>
#include <string>
#include <unordered_map>
#include <cmath>

int remAnagram(string s1, string s2) {
    // Array to store character frequencies (for a-z)
    int freq[26] = {0}; 
    int deletions = 0;
    for (char c : s1) {
        freq[c - 'a']++;
    }

    for (char c : s2) {
        freq[c - 'a']--;
    }

    // Sum the absolute values of the remaining frequencies
    for (int i = 0; i < 26; i++) {
        deletions += abs(freq[i]);
    }

    return deletions;
}
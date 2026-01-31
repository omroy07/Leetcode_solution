class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
    int low = 0, high = letters.size() - 1;
    if (target >= letters[high]) {
        return letters[0];
    }
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (letters[mid] > target) {
            high = mid - 1; // Search in the left half
        } else {
            low = mid + 1;  // Search in the right half
        }
    }

    return letters[low];    
    }
};
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;
        for (string s : strs) {
            string sortedStr = s;  // Create a copy of the string to sort
            sort(sortedStr.begin(), sortedStr.end());  // Sort the copy
            anagramGroups[sortedStr].push_back(s);  // Group the original string by the sorted version
        }
        
        // Prepare the result vector
        vector<vector<string>> result;
        for (auto& group : anagramGroups) {
            result.push_back(group.second);  // Add each group of anagrams to the result
        }
        
        return result;
    }
};

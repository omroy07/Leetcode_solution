class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
       vector<int> temp1(26,0);
        vector<int> temp2(26,0);
        for(auto x : word1)
        temp1[x-'a']++;

        for(auto x : word2)
        temp2[x-'a']++;

        for(int i = 0; i<26; i++)
        if(abs(temp1[i] - temp2[i]) > 3)
        return false;
        return true; 
    }
};
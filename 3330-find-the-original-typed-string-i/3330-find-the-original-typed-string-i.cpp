class Solution {
public:
    int possibleStringCount(string word) {
        unordered_map<char,int> freq;
        for(int i = 0; i < word.size(); i++){
            freq[word[i]]++;
        }
        int s = 0;
        for(auto const p : freq){
            if(p.second > 1){
                s += p.second;
                s -= 1;
            }
        }
        return s + 1;
    }
};
class Solution {
public:
    int Same(string s, string p){
        if(s.size() != p.size()){
            return 0;
        }
        unordered_map<char, char> first;
        unordered_map<char, char> second;
        for(int i = 0; i < s.size(); i++){
            char s_char = s[i];
            char p_char = p[i];
            if(first.find(s_char) == first.end() && second.find(p_char) == second.end()){
                first[s_char] = p_char;
                second[p_char] = s_char;
            }
            else {
                if(first.find(s_char) != first.end()){
                    if(first[s_char] != p_char){
                        return 0; 
                    }
                }
                
                if(second.find(p_char) != second.end()){
                    if(second[p_char] != s_char){
                        return 0; 
                    }
                }
            }
        }
        return 1;
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> result;
        for(string word : words){
            if(Same(word, pattern)){
                result.push_back(word);
            }
        }
        return result;
    }
};
class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        string temp = "";
        for(auto word : words){
            temp = "";
            for(auto x : word){
                if(x == separator && temp.size() > 0){
                    ans.push_back(temp);
                    temp = "";
                }
                else if(x != separator){
                    temp += x;
                }
            }
            if(temp.size() > 0){
                ans.push_back(temp);
            }
            temp = "";
        }
        return ans;
    }
};
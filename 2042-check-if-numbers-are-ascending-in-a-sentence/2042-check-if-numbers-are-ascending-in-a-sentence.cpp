class Solution {
public:
    bool areNumbersAscending(string s) {
        string temp = "";
        int n = 0;
        for(auto x : s){
            if(isdigit(x)){
                temp += x;
            }
            else if(temp.size() > 0){
                if(n >= stoi(temp)){
                    return false;
                }
                n = stoi(temp);
                temp = "";
            }
        }
        if(temp.size() > 0 && n >= stoi(temp)){
            return false;
        }
        return true;
    }
};
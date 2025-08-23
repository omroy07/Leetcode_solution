class Solution {
public:
    bool Checker(string x, string y){
        for(char ch : x){
            if(y.find(ch) == string:: npos){
                return false;
            }
        }
        for(char ch : y){
            if(x.find(ch) == string:: npos){
                return false;
            }
        }
        return true;
    }
    int similarPairs(vector<string>& words) {
        int count = 0;
        for(int i = 0;i < words.size()-1;i++){
            for(int j = i + 1; j < words.size();j++){
                if(Checker(words[i],words[j])){
                    count++;
                }
            }
        }
        return count;
    }
};
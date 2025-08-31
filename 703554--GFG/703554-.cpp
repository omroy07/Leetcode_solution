// User function template for c++
class Solution {
  public:
    string removeChars(string str1, string str2) {
        // code here
        for(int i=0;i<str2.size();i++){
            size_t pos=str1.find(str2[i]);
            while(pos!=string::npos){
                str1.erase(pos,1);
                pos=str1.find(str2[i]);
            }
        }
        return str1;
    }
};

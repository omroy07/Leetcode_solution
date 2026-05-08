class Solution {
public:
    string toHex(int num) {
        unsigned int on = num;
        string str;
        char oa[17] = "0123456789abcdef";
        do{
            str += oa[on%16];
            on /= 16;
        }while(on);
        return {str.rbegin(),str.rend()};
    }
};
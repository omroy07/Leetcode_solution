class Solution {
public:
    string removeTrailingZeros(string num) {
        while (num.length() > 1 && num.back() == '0') {
            num.pop_back();
        }
        return num;
    }
};
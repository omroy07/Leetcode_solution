class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ans;
        for(char ch = s[0]; ch <= s[3];ch++){
            for(int i = s[1] - '0' ; i <= s[4] - '0' ; i++){
                string res = "";
                res += ch;
                res += to_string(i);
                ans.push_back(res);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
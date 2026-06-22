class Solution {
public:
    void solve(vector<string>& ans, int n , string temp){
        if(temp.size() == n){
            ans.push_back(temp);
            return;
        }
        if (temp.empty() || temp.back() != '0')
            solve(ans, n, temp + "0");

        solve(ans, n, temp + "1");
    }
    vector<string> validStrings(int n) {
        vector<string> ans;
        solve(ans,n,"");
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
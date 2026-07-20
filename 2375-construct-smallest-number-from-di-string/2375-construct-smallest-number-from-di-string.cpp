class Solution {
public:
    string smallestNumber(string pattern) {
        string ans = "";
        stack<int> st;

        for (int i = 0; i <= pattern.size(); i++) {
            st.push(i + 1);

            if (i == pattern.size() || pattern[i] == 'I') {
                while (!st.empty()) {
                    ans += char(st.top() + '0');
                    st.pop();
                }
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
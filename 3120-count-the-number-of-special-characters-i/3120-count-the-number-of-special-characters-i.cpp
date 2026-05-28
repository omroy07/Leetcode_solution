class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> st(word.begin(),word.end());
        int count =  0;
        for(char ch = 'a'; ch <= 'z';ch++){
            if(st.count(ch) && st.count(ch - 'a' + 'A')){
                count++;
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna
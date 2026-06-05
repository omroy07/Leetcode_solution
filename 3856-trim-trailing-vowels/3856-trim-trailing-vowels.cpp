class Solution {
public:
    bool isVowel(char ch){
        return ch == 'a' ||ch == 'e' || ch == 'i' || ch == 'o'|| ch == 'u';
    }
    string trimTrailingVowels(string s) {
        while(!empty(s) && isVowel(s.back())){
            s.pop_back();
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna
class Solution {
public:
    int minTimeToType(string word) {
        int ans = 0;
        int pointer = 'a';
        for(int i= 0; i < word.length();i++){
            int clockwise_move = abs(word[i] - pointer);
            int counter_clockwise_move = 26- clockwise_move;
            ans += min(clockwise_move,counter_clockwise_move) + 1;
            pointer = word[i];
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna
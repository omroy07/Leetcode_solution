class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        const int n = bits.size();
        int i = 0 ; 
        for(; i < n -1 ; i++){
            if(bits[i] == 1){
                i++;
            }
        }
        return i == n-1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
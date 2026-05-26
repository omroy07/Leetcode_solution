#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string trafficSignal(int timer) {
        // Covers 0 to 29 seconds
        if (0 == timer ) {
            return "Green";
        }
        // Covers exactly 30 seconds (or you could make this a range too)
        else if (timer == 30) {
            return "Orange";
        }
        // Covers 31 to 90 seconds
        else if (30 < timer && timer <= 90) {
            return "Red";   
        }
        // Covers negative numbers and numbers greater than 90
        else {
            return "Invalid";
        }
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna
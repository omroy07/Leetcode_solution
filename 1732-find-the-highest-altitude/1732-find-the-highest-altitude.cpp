class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> p;
        int j = 0;       
        p.push_back(0); // Starting altitude is 0       
        for(int i = 0; i < gain.size(); i++){
            p.push_back(p[i] + gain[j]); // Calculate each altitude and push to vector
            j++;
        }        
        sort(p.begin(), p.end()); // Sort to get the maximum altitude
        return p[p.size() - 1]; // Return the largest altitude
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
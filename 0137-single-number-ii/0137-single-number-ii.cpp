class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> p;
        for(int i = 0; i< nums.size();i++){
            p[nums[i]]++;
        }
        for (auto it : p) {
            if (it.second == 1) {
                return it.first;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
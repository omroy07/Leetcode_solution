class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int odd = 0, even =0;
        int n = nums.size();
        vector<int> result(n,0);
        for(int i=n-1;i>=0;i--){
            if(nums[i]&1){
                result[i] = even;
                odd++;
            }
            else{
                result[i] = odd;
                even++;
            }
        }

        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna
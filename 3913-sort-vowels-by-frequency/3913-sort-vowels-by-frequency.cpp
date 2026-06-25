class Solution {
public:
    string sortVowels(string s) {
        const int n = s.size();
        vector<vector<int>> arr(26, vector<int>(3));

        for(int i=0;i<26;++i){
            arr[i][0] = 0;
            arr[i][1] = -1;
            arr[i][2] = i;
        }

        for(int i=0;i<n;++i){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                int val = s[i] - 'a';
                if(!arr[val][0]) arr[val][1] = i;
                arr[val][0]++;
            }
        }

        sort(arr.begin(), arr.end(), [](const vector<int>& a, const vector<int>& b){
            if(a[0] != b[0])
                return a[0] > b[0];

            return a[1] < b[1];
        });

        int j=0;
        for(int i=0;i<n;++i){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                if(!arr[j][0]) j++;
                s[i] = (char)('a' + arr[j][2]);
                arr[j][0]--;
            }
        }

        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
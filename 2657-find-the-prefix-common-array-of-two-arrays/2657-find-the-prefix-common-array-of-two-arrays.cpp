class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> c;
        for(int i = 0; i< A.size();i++){
            int count = 0;
            for(int j= 0; j <i+1;j++ ){
                for(int k=0;k<i+1;k++){
                    if(A[j] == B[k]){
                        count++;
                    }
                }
            }
            c.push_back(count);
        }
        return c;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna
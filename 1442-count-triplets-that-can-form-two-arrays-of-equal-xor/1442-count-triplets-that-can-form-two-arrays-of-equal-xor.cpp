class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        vector<int> pre(n+1,0);
        for(int i = 1; i <= n; i++){
            pre[i] = pre[i-1]^arr[i-1];
        }
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                for(int k = j; k < n; k++){
                    if((pre[j] ^ pre[i]) == (pre[k + 1] ^ pre[j]))
                        ans++;
                }
            }
        }

        return ans;

    }
};
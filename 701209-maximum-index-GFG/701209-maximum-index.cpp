// class Solution {
//   public:
//     int maxIndexDiff(vector<int>& arr) {
//         // code here
//         int c  = 0;
//         int m1 = 0;
//         for(int i  = 0 ; i < arr.size()-1 ; i++){
//             int m = 0;
//             for(int j = i+1;j < arr.size() ; j++){
//                 if(arr[i] <= arr[j]){
//                     m = j-i;
//                 }
//             }
//             m1 = max(m,m1);
//         }
//         return m1;
//     }
// };

class Solution {
public:
    int maxIndexDiff(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;
        vector<int> LMin(n);
        vector<int> RMax(n);
        LMin[0] = arr[0];
        for (int i = 1; i < n; i++) {
            LMin[i] = min(arr[i], LMin[i-1]);
        }
        RMax[n-1] = arr[n-1];
        for (int j = n-2; j >= 0; j--) {
            RMax[j] = max(arr[j], RMax[j+1]);
        }
        int i = 0, j = 0;
        int maxDiff = 0;
        while (i < n && j < n) {
            if (LMin[i] <= RMax[j]) {
                maxDiff = max(maxDiff, j - i);
                j++;
            } else {
                i++;
            }
        }
        return maxDiff;
    }
};
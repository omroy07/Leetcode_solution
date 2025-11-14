// class Solution {
// public:
//     vector<int> addToArrayForm(vector<int>& num, int k) {
//         long long a = 0;
//         for(int i = 0; i < num.size(); i++){
//             a = a * 10 + num[i];
//         }
//         a = a + k;
//         vector<int> ans;
//         if (a == 0) {
//             return {0};
//         }
//         while(a > 0){
//             ans.push_back(a % 10);
//             a /= 10;
//         }
//         reverse(ans.begin(), ans.end());

//         return ans;
//     }
// };
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        for(int i=num.size()-1;i>=0;i--){
            num[i] += k;
            k = num[i]/10;
            num[i] %= 10;
        }
        while(k > 0){
            num.insert(num.begin(), k%10);
            k /= 10;
        }
        return num;
    }
};
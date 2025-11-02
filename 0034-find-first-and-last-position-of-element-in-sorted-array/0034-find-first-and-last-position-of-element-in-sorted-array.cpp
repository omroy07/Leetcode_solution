// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int> p(2,-1);
//         int j = 0;
//         for(int i = 0;i< nums.size();i++){
//             if(nums[i] == target && nums[i+2] != target){
//                 p[j] = i;
//                 j++;
//             }
//         }
//         return p;
//     }
// };

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);  
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            if (nums[i] == target) {
                result[0] = i; 
                break;
            }
        }
        for (int i = n - 1; i >= 0; --i) {
            if (nums[i] == target) {
                result[1] = i;  
                break;
            }
        }
        
        return result;
    }
};

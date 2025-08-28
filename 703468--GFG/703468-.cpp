//  Function to multiply the sum of first half of the array with the sum of second half
//  of the array
class Solution {
  public:
    int multiply(vector<int> &arr) {
        // code here
        int leftsum=0,rightsum=0;
        int n = arr.size();
        for(int i = 0;i<n/2;i++){
            leftsum+=arr[i];
        }
        for(int j = n-1;j>=n/2;j--){
            rightsum+=arr[j];
        }
    
        return leftsum*rightsum;
    }
};
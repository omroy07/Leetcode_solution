class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int start = 0; 
        int end = arr.size()-1;
        int result = -1;
        while(start <= end){
            int m = start + (end-start)/2;
            if(arr[m] == k){
                result = m;
                end = m-1;
            }
            else if(arr[m] < k){
                start = m+1;
            }
            else{
                end = m-1;
            }
        }
        return result;
    }
};
class Solution {
  public:
    vector<int> findElements(vector<int> arr) {
        // Your code goes here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        if(arr.size() <= 2) return{};
        arr.resize(arr.size() -2);
        return arr;
    }
};
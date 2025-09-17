class Solution {
public:
    int countTriplet(std::vector<int>& arr) {
        int count = 0;
        // Step 1: Sort the array
        std::sort(arr.begin(), arr.end());
        int n = arr.size();

        // Step 2: Iterate from the end and use two pointers
        for (int k = n - 1; k >= 2; --k) {
            int i = 0;
            int j = k - 1;

            while (i < j) {
                if (arr[i] + arr[j] == arr[k]) {
                    count++;
                    i++;
                    j--;
                } else if (arr[i] + arr[j] < arr[k]) {
                    i++;
                } else { // arr[i] + arr[j] > arr[k]
                    j--;
                }
            }
        }
        return count;
    }
};
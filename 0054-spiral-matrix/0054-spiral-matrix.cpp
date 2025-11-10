class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> p;
        if (matrix.empty()) return p;
        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;
        while (top <= bottom && left <= right) {
           for (int i = left; i <= right; ++i) {
             p.push_back(matrix[top][i]);
            }
            top++;

        // Traverse from top to bottom
            for (int i = top; i <= bottom; ++i) {
             p.push_back(matrix[i][right]);
            }
            right--;

            if (top <= bottom) {
            // Traverse from right to left
            for (int i = right; i >= left; --i) {
                p.push_back(matrix[bottom][i]);
            }
            bottom--;
            }

            if (left <= right) {
            // Traverse from bottom to top
            for (int i = bottom; i >= top; --i) {
                p.push_back(matrix[i][left]);
            }
            left++;
            }
        }
    return p;
    }
};
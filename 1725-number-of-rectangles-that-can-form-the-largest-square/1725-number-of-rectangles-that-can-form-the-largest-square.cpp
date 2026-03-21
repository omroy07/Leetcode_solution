class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int a = 0; // This stores the max side length found
        int count = 0; // This will store the final result
        
        // First pass: Find the maximum side length 'a'
        for(int i = 0; i < rectangles.size(); i++){
            int p = min(rectangles[i][0], rectangles[i][1]);
            if (p > a) {
                a = p;
            }
        }
        
        // Second pass: Count how many rectangles can form a square of side 'a'
        for(int i = 0; i < rectangles.size(); i++){
            int p = min(rectangles[i][0], rectangles[i][1]);
            if (p == a) {
                count++;
            }
        }
        
        return count;
    }
};
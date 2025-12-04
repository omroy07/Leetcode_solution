class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size();
        if (n < 2) {
            return 0;
        }
        int start = 0;
        while (start < n && directions[start] == 'L') {
            start++;
        }
        int end = n - 1;
        while (end >= start && directions[end] == 'R') {
            end--;
        }
        if (start > end) {
            return 0;
        }
        int collisions = 0;
        for (int i = start; i <= end; i++) {
            if (directions[i] == 'R' || directions[i] == 'L') {
                collisions++;
            }
        }
        return collisions;
    }
};
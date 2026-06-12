// class Solution {
// public:
//     int minimumObstacles(vector<vector<int>>& grid) {
//         int m = grid.size(), n = grid[0].size();
//         vector<vector<int>> distance(m, vector<int>(n, INT_MAX));
//         distance[0][0] = 0;
//         deque<pair<int, int>> dq;
//         dq.push_front({0, 0});
//         vector<int> dx = {-1, 0, 1, 0};
//         vector<int> dy = {0, 1, 0, -1};
//         while (!dq.empty()) {
//             auto [x, y] = dq.front();
//             dq.pop_front();
//             for (int k = 0; k < 4; ++k) {
//                 int nx = x + dx[k];
//                 int ny = y + dy[k];
//                 if (nx < 0 || ny < 0 || nx >= m || ny >= n) continue;
//                 int newDist = distance[x][y] + grid[nx][ny];
//                 if (newDist < distance[nx][ny]) {
//                     distance[nx][ny] = newDist;
//                     if (grid[nx][ny] == 0) {
//                         dq.push_front({nx, ny});
//                     } else {
//                         dq.push_back({nx, ny});
//                     }
//                 }
//             }
//         }
//         return distance[m - 1][n - 1];
//     }
// };

class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        int rows = grid.size(), cols = grid[0].size();
        vector<vector<int>> visited(rows, vector<int>(cols, 0));
        deque<pair<int, pair<int, int>>> dq; // {obstacles_removed, {row, col}}
        vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

        // Start from the top-left corner
        dq.push_front({0, {0, 0}});
        visited[0][0] = 1;

        while (!dq.empty()) {
            auto [obstacles_removed, cell] = dq.front();
            dq.pop_front();
            int r = cell.first, c = cell.second;

            // If we reach the bottom-right corner
            if (r == rows - 1 && c == cols - 1)
                return obstacles_removed;

            for (auto& [dr, dc] : directions) {
                int nr = r + dr, nc = c + dc;

                // Check bounds and if the cell is already visited
                if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && !visited[nr][nc]) {
                    visited[nr][nc] = 1;
                    if (grid[nr][nc] == 0) {
                        dq.push_front({obstacles_removed, {nr, nc}});
                    } else {
                        dq.push_back({obstacles_removed + 1, {nr, nc}});
                    }
                }
            }
        }

        return -1; // Shouldn't be reached as a path is guaranteed
    }
};



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
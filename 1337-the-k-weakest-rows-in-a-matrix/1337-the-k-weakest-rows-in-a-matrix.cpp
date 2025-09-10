#include <iostream>
#include <vector>
#include <map>
#include <numeric> // For std::accumulate

class Solution {
public:
    std::vector<int> kWeakestRows(std::vector<std::vector<int>>& mat, int k) {
        std::map<int, std::vector<int>> soldier_counts;
        std::vector<int> result;

        for (int i = 0; i < mat.size(); ++i) {
            int soldiers = std::accumulate(mat[i].begin(), mat[i].end(), 0);
            soldier_counts[soldiers].push_back(i);
        }

        for (auto const& [count, indices] : soldier_counts) {
            for (int index : indices) {
                if (k > 0) {
                    result.push_back(index);
                    k--;
                } else {
                    return result;
                }
            }
        }
        return result;
    }
};
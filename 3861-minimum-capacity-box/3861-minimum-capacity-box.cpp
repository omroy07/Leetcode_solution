class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int bestIndex = -1;
        int minCapacityFound = INT_MAX;
        for (int i = 0; i < capacity.size(); i++) {
            if (capacity[i] >= itemSize && capacity[i] < minCapacityFound) {
                minCapacityFound = capacity[i];
                bestIndex = i;
            }
        }
        return bestIndex;
    }
};
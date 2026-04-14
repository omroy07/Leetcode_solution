class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
         unordered_map<int, int> xToMaxY;

    // Step 1: Track max y for each unique x
    for (int i = 0; i < x.size(); ++i) {
        if (xToMaxY.find(x[i]) == xToMaxY.end()) {
            xToMaxY[x[i]] = y[i];
        } else {
            xToMaxY[x[i]] = max(xToMaxY[x[i]], y[i]);
        }
    }

    // Step 2: If less than 3 distinct x-values, return -1
    if (xToMaxY.size() < 3) return -1;

    // Step 3: Collect all y-values, then get top 3
    priority_queue<int> pq;
    for (auto& pair : xToMaxY) {
        pq.push(pair.second);
    }

    // Step 4: Take the top 3 max y-values
    int result = 0;
    for (int i = 0; i < 3; ++i) {
        result += pq.top();
        pq.pop();
    }

    return result;
    }
};
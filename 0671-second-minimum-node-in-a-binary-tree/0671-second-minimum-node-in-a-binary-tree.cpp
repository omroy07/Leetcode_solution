/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void traverse(TreeNode* node, unordered_map<int, int>& counts) {
        if (!node) return;
        counts[node->val]++;
        traverse(node->left, counts);
        traverse(node->right, counts);
    }

    int findSecondMinimumValue(TreeNode* root) {
        unordered_map<int, int> uniqueValues;
        traverse(root, uniqueValues);
        if (uniqueValues.size() < 2) return -1;
        vector<long> values;
        for (auto const& [val, count] : uniqueValues) {
            values.push_back(val);
        }
        sort(values.begin(), values.end());
        return (int)values[1];
    }
};
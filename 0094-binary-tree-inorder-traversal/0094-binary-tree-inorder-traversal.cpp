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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> p;
        if(root == NULL){
           return p;
        }
        vector<int> left = inorderTraversal(root->left);
        p.insert(p.end(),left.begin(),left.end());
        p.push_back(root->val);
        vector<int> right = inorderTraversal(root->right);
        p.insert(p.end(),right.begin(),right.end());
        return p;
    }
};
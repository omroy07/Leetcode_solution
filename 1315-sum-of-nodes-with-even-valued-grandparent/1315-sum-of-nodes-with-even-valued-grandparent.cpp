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
    int sumEvenGrandparent(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        int s = 0;
        if(root->val %2 == 0){
            if(root->left != NULL && root->left->left != NULL){
                s += root->left->left->val;
            } 
            if(root->left != NULL && root->left->right != NULL){
                s += root->left->right->val;
            } 
            if(root->right != NULL && root->right->left != NULL){
                s += root->right->left->val;
            } 
            if(root->right != NULL && root->right->right != NULL){
                s += root->right->right->val;
            } 
        }
        s +=sumEvenGrandparent(root->left); 
        s +=sumEvenGrandparent(root->right); 
        return s;
    }
};
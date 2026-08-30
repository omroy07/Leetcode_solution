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
    string tree2str(TreeNode* root) {
        string str = "";
        check(root,str);
        return str;
    }
    void check(TreeNode* root , string &str){
        if(root == NULL){
            return;
        }
        str += to_string(root->val);
        if(root->left || root->right){
            str += '(';
            check(root->left,str);
            str+= ')';
        }
        if (root->right) {
            str += '(';
            check(root->right, str);
            str += ')';
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
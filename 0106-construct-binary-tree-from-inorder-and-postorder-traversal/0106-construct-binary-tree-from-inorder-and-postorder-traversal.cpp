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
    TreeNode*  helper(vector<int>& inorder, vector<int>& postorder , int &post , int l , int r){
        if(l>r){
            return nullptr;
        }
        int v = postorder[post--];
        TreeNode* root = new TreeNode(v);
        int i = l;
        while (i <= r && inorder[i] != v) {
            i++;
        }
        root->right = helper(inorder , postorder , post, i + 1, r);
        root->left = helper(inorder, postorder , post, l, i - 1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
       int post = postorder.size() - 1;
       return helper(inorder,postorder,post,0,inorder.size() - 1); 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
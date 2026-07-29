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
// class Solution {
// public:
//     int minDepth(TreeNode* root) {
//         if (!root) {
//             return 0; 
//         }
//         int minl = minDepth(root->left);
//         int minr = minDepth(root->right);
//         if (!root->left || !root->right) {
//             return max(minl, minr) + 1;
//         }
//         return min(minl, minr) + 1;
//     }
// };


class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL)
        {
            return 0;
        }
        else if(root -> left == NULL && root -> right == NULL)
        {
            return 1;
        }
        else if(root -> left != NULL && root -> right == NULL)
        {
            return minDepth(root -> left) + 1;
        }
        else if(root -> left == NULL && root -> right != NULL)
        {
            return minDepth(root -> right) + 1;
        }
        else
        {
            return min(minDepth(root -> left), minDepth(root -> right)) + 1;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
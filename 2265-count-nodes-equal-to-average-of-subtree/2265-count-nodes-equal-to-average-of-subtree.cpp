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
    int m = 0;
    pair<int,int> cacuate(TreeNode* currentNode){
        if(currentNode == nullptr){
            return {0,0};
        }
        auto l = cacuate(currentNode->left);
        auto r = cacuate(currentNode->right);
        int sum = l.first + r.first + currentNode->val;
        int num = l.second + r.second + 1;
        if(sum/num == currentNode -> val){
            m++;
        }
        return {sum,num};
    }
    int averageOfSubtree(TreeNode* root) {
        cacuate(root);
        return m;
        
    }
};
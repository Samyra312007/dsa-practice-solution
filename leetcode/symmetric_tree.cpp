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
    bool check(TreeNode* rootl, TreeNode* rootr){
        if(!rootl && !rootr) return true;
        if(!rootl || !rootr) return false;
        return rootl->val == rootr->val && check(rootl->left, rootr->right) && check(rootl->right, rootr->left);
        
    }
    bool isSymmetric(TreeNode* root) {
        return root == NULL || check(root->left, root->right);
    }
};
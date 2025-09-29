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
    TreeNode* search(TreeNode* root, int val, TreeNode* value){
        if(!root) return NULL;
        if(root->val == val) value = root;
        else if(val < root->val){
            value = search(root->left, val, value);
        }
        else{ 
            value = search(root->right, val, value);
        }
        return value;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* value = NULL;
        return search(root, val, value);
    }
};
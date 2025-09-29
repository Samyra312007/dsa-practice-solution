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
    TreeNode* formbst(TreeNode* root, int target){
        if(!root){
            root = new TreeNode(target);
            return root;
        }
        if(target > root->val){
            root->right = formbst(root->right, target);
        }
        else{
            root->left = formbst(root->left, target);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = NULL;
        for(int i = 0; i<preorder.size(); i++){
            root = formbst(root, preorder[i]);
        }
        return root;
    }
};
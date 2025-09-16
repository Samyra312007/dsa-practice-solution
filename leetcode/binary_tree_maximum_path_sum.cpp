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
class Solution
{
public:
    int height(TreeNode *root, int &res)
    {
        if (!root)
            return 0;
        int lh = max(height(root->left, res), 0);
        int rh = max(height(root->right, res), 0);
        res = max(res, lh + rh + root->val);
        return max(lh + root->val, rh + root->val);
    }
    int maxPathSum(TreeNode *root)
    {
        int res = INT_MIN;
        height(root, res);
        return res;
    }
};
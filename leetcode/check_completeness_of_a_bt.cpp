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
    int count(TreeNode *root)
    {
        if (!root)
            return 0;
        return 1 + count(root->left) + count(root->right);
    }
    bool cbt(TreeNode *root, int in, int total)
    {
        if (!root)
            return 1;
        if (in >= total)
        {
            return 0;
        }
        return cbt(root->left, 2 * in + 1, total) && cbt(root->right, 2 * in + 2, total);
    }
    bool isCompleteTree(TreeNode *root)
    {
        int total = count(root);
        return cbt(root, 0, total);
    }
};
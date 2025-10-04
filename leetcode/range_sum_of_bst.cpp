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
    void rsum(TreeNode *root, long long int &summ, int low, int high)
    {
        if (!root)
            return;
        if (root->val >= low && root->val <= high)
            summ += root->val;
        rsum(root->left, summ, low, high);
        rsum(root->right, summ, low, high);
    }
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        long long int summ = 0;
        rsum(root, summ, low, high);
        return summ;
    }
};
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
    void dfs(TreeNode *root, vector<string> &ans, string temp)
    {
        if (!root)
            return;
        temp.append(to_string(root->val) + "->");
        if (!root->left && !root->right)
        {
            ans.push_back(temp.substr(0, temp.length() - 2));
            return;
        }
        else
        {
            dfs(root->left, ans, temp);
            dfs(root->right, ans, temp);
        }
    }
    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> result;
        if (root == NULL)
            return result;
        string temp = "";
        dfs(root, result, temp);
        return result;
    }
};
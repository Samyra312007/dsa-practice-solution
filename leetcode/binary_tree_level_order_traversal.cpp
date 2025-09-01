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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> result;
        if (!root)
            return result;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *temp;
            int lsize = q.size();
            vector<int> ans;
            for (int i = 0; i < lsize; i++)
            {
                temp = q.front();
                q.pop();
                ans.push_back(temp->val);
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
            result.push_back(ans);
        }
        return result;
    }
};
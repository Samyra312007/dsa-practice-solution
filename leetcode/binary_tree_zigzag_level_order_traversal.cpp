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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (!root)
            return ans;
        stack<TreeNode *> s1;
        stack<TreeNode *> s2;
        s1.push(root);
        while (!s1.empty() || !s2.empty())
        {
            if (!s1.empty())
            {
                vector<int> a1;
                while (!s1.empty())
                {
                    TreeNode *temp = s1.top();
                    s1.pop();
                    a1.push_back(temp->val);
                    if (temp->left)
                    {
                        s2.push(temp->left);
                    }
                    if (temp->right)
                    {
                        s2.push(temp->right);
                    }
                }
                ans.push_back(a1);
            }
            else
            {
                vector<int> a2;
                while (!s2.empty())
                {
                    TreeNode *temp = s2.top();
                    s2.pop();
                    a2.push_back(temp->val);
                    if (temp->right)
                    {
                        s1.push(temp->right);
                    }
                    if (temp->left)
                    {
                        s1.push(temp->left);
                    }
                }
                ans.push_back(a2);
            }
        }
        return ans;
    }
};
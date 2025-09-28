/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    unordered_map<TreeNode *, TreeNode *> parent;
    void inorder(TreeNode *root)
    {
        if (!root)
            return;
        if (root->left)
            parent[root->left] = root;
        inorder(root->left);
        if (root->right)
            parent[root->right] = root;
        inorder(root->right);
    }
    vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
    {
        vector<int> result;
        if (!root)
            return result;
        inorder(root);
        queue<TreeNode *> q;
        q.push(target);
        unordered_set<TreeNode *> visit;
        visit.insert(target);
        while (!q.empty())
        {
            int n = q.size();
            if (k == 0)
                break;
            while (n--)
            {
                TreeNode *cur = q.front();
                q.pop();
                if (cur->left && !visit.count(cur->left))
                {
                    q.push(cur->left);
                    visit.insert(cur->left);
                }
                if (cur->right && !visit.count(cur->right))
                {
                    q.push(cur->right);
                    visit.insert(cur->right);
                }
                if (parent.count(cur) && !visit.count(parent[cur]))
                {
                    q.push(parent[cur]);
                    visit.insert(parent[cur]);
                }
            }
            k--;
        }
        while (!q.empty())
        {
            TreeNode *curr = q.front();
            q.pop();
            result.push_back(curr->val);
        }
        return result;
    }
};
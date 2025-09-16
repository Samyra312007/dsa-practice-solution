/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution
{
public:
    void find(Node *root, int pos, int &l, int &r)
    {
        if (!root)
            return;
        l = min(pos, l);
        r = max(pos, r);
        find(root->left, pos - 1, l, r);
        find(root->right, pos + 1, l, r);
    }

    void bview(Node *root, int pos, vector<int> &ans, vector<int> &level, int depth)
    {
        if (!root)
            return;
        if (!ans[pos] || depth >= level[pos])
        {
            ans[pos] = root->data;
            level[pos] = depth;
        }
        bview(root->left, pos - 1, ans, level, depth + 1);
        bview(root->right, pos + 1, ans, level, depth + 1);
    }

    vector<int> bottomView(Node *root)
    {
        int l = 0, r = 0;
        find(root, 0, l, r);

        vector<int> ans(r - l + 1);
        vector<int> level(r - l + 1, 0);

        bview(root, -1 * l, ans, level, 0);
        return ans;
    }
};
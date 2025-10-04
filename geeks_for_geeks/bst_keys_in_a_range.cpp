class Solution
{
public:
    void print(Node *root, vector<int> &res, int low, int high)
    {
        if (!root)
            return;
        if (root->data >= low && root->data <= high)
        {
            res.push_back(root->data);
        }
        print(root->left, res, low, high);
        print(root->right, res, low, high);
    }
    vector<int> printNearNodes(Node *root, int low, int high)
    {
        vector<int> res;
        print(root, res, low, high);
        sort(res.begin(), res.end());
        return res;
    }
};
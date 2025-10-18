// User function Template for C++

/*struct Node {
    int data;
    Node *left, *right;
};*/

class Solution
{
public:
    void inorder(Node *root, vector<int> &res)
    {
        if (!root)
            return;
        inorder(root->left, res);
        res.push_back(root->data);
        inorder(root->right, res);
    }
    void postorder(Node *root, int &in, vector<int> &res)
    {
        if (!root)
            return;
        postorder(root->left, in, res);
        postorder(root->right, in, res);
        root->data = res[in];
        in++;
    }
    void convertToMaxHeapUtil(Node *root)
    {
        vector<int> res;
        inorder(root, res);
        int in = 0;
        postorder(root, in, res);
    }
};

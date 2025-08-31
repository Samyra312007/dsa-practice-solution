/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

void preorder(TreeNode *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    ans.push_back(root->data);
    preorder(root->left, ans);
    preorder(root->right, ans);
}
void inorder(TreeNode *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}
void postorder(TreeNode *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    postorder(root->left, ans);
    postorder(root->right, ans);
    ans.push_back(root->data);
}

vector<vector<int>> getTreeTraversal(TreeNode *root)
{
    vector<vector<int>> result;
    vector<int> pre, ino, post;
    preorder(root, pre);
    inorder(root, ino);
    postorder(root, post);
    result.push_back(ino);
    result.push_back(pre);
    result.push_back(post);
    return result;
}
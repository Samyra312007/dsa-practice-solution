// User function Template for C++

/*
struct Node {
    int data;
    Node* right;
    Node* left;

    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/

// Function to find ceil of a given input in BST. If input is more
// than the max key in BST, return -1

void inorder(Node *root, vector<int> &res)
{
    if (!root)
        return;
    inorder(root->left, res);
    res.push_back(root->data);
    inorder(root->right, res);
}
int sum(Node *root, int k)
{
    vector<int> res;
    inorder(root, res);
    int summ = 0;
    for (int i = 0; i < k; i++)
        summ += res[i];
    return summ;
}
/*struct Node
{
    int data;
    Node *left, *right;
};*/
Node *postorder(Node *root, int val)
{
    if (!root)
    {
        Node *temp = new Node(val);
        return temp;
    }
    if (root->data < val)
    {
        root->right = postorder(root->right, val);
    }
    else
    {
        root->left = postorder(root->left, val);
    }
    return root;
}

Node *constructTree(int post[], int size)
{
    Node *root = NULL;
    for (int i = 0; i < size; i++)
    {
        root = postorder(root, post[i]);
    }
    return root;
}
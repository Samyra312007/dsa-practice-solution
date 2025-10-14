/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution
{
public:
    void inorder(Node *root, int l, int r, int &summ)
    {
        if (!root)
            return;
        inorder(root->left, l, r, summ);
        if (root->data >= l && root->data <= r)
        {
            summ += root->data;
        }
        inorder(root->right, l, r, summ);
    }
    int nodeSum(Node *root, int l, int r)
    {
        int summ = 0;
        inorder(root, l, r, summ);
        return summ;
    }
};

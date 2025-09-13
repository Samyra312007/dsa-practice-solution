/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution
{
public:
    // Function to count the number of leaf nodes in a binary tree.
    void cntleaf(Node *root, int &cnt)
    {
        if (root == NULL)
            return;
        if (!root->left && !root->right)
        {
            cnt++;
            return;
        }
        cntleaf(root->left, cnt);
        cntleaf(root->right, cnt);
    }
    int countLeaves(Node *root)
    {
        int count = 0;
        cntleaf(root, count);
        return count;
    }
};
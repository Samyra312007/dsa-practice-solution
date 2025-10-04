/*The Node structure is
class Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};*/

class Solution
{
public:
    bool dead(Node *root, int lower, int upper)
    {
        if (!root)
            return 0;
        if (!root->left && !root->right)
        {
            if (root->data - lower == 1 && upper - root->data == 1)
                return 1;
            else
                return 0;
        }
        return dead(root->left, lower, root->data) || dead(root->right, root->data, upper);
    }
    bool isDeadEnd(Node *root)
    {
        return dead(root, 0, INT_MAX);
    }
};
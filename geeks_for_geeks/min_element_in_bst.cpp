/* struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
*/

class Solution
{
public:
    void pre(Node *root, int &min)
    {
        if (!root)
            return;
        min = root->data;
        pre(root->left, min);
    }
    int minValue(Node *root)
    {
        int min = INT_MAX;
        pre(root, min);
        return min;
    }
};
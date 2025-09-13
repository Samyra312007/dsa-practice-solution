/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution
{
public:
    void sumf(Node *root, int &count)
    {
        if (root == NULL)
            return;
        count += root->data;
        sumf(root->left, count);
        sumf(root->right, count);
    }
    int sumBT(Node *root)
    {
        int count = 0;
        sumf(root, count);
        return count;
    }
};
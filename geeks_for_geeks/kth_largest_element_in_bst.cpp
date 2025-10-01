/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution
{
public:
    void inorder(Node *root, int &ans, int &k)
    {
        if (!root)
            return;
        inorder(root->right, ans, k);
        k--;
        if (k == 0)
        {
            ans = root->data;
            return;
        }
        if (k <= 0)
        {
            return;
        }
        inorder(root->left, ans, k);
    }
    int kthLargest(Node *root, int k)
    {
        int ans = INT_MAX;
        inorder(root, ans, k);
        return ans;
    }
};
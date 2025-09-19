/*
// Tree Node
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
    void Leftsub(Node *root, vector<int> &ans)
    {
        if (!root || (!root->left && !root->right))
            return;
        ans.push_back(root->data);
        if (root->left)
        {
            Leftsub(root->left, ans);
        }
        else
        {
            Leftsub(root->right, ans);
        }
    }

    void Leaf(Node *root, vector<int> &ans)
    {
        if (!root)
            return;
        if (!root->left && !root->right)
        {
            ans.push_back(root->data);
            return;
        }
        Leaf(root->left, ans);
        Leaf(root->right, ans);
    }

    void Rightsub(Node *root, vector<int> &ans)
    {
        if (!root || (!root->left && !root->right))
            return;
        if (root->right)
        {
            Rightsub(root->right, ans);
        }
        else
        {
            Rightsub(root->left, ans);
        }
        ans.push_back(root->data);
    }
    vector<int> boundaryTraversal(Node *root)
    {
        vector<int> ans;
        ans.push_back(root->data);
        Leftsub(root->left, ans);
        if (root->left || root->right)
            Leaf(root, ans);
        Rightsub(root->right, ans);
        return ans;
    }
};
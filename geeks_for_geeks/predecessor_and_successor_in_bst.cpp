/* BST Node
class Node
{
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution
{
public:
    Node *inordersucc(Node *root, int key)
    {
        Node *pred = NULL;
        while (root)
        {
            if (key <= root->data)
            {
                root = root->left;
            }
            else
            {
                pred = root;
                root = root->right;
            }
        }
        return pred;
    }
    Node *inorderpred(Node *root, int key)
    {
        Node *succ = NULL;
        while (root)
        {
            if (key >= root->data)
            {
                root = root->right;
            }
            else
            {
                succ = root;
                root = root->left;
            }
        }
        return succ;
    }
    vector<Node *> findPreSuc(Node *root, int key)
    {
        vector<Node *> res;
        Node *getsucc = inordersucc(root, key);
        Node *getpred = inorderpred(root, key);
        res.push_back(getsucc);
        res.push_back(getpred);
        return res;
    }
};
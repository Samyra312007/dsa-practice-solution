/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec
{
public:
    // Encodes a tree to a single string.
    void ser(TreeNode *root, string &tree)
    {
        if (root == nullptr)
        {
            tree += "#,";
            return;
        }
        tree += to_string(root->val) + ",";
        ser(root->left, tree);
        ser(root->right, tree);
    }

    string serialize(TreeNode *root)
    {
        string tree = "";
        ser(root, tree);
        return tree;
    }

    string gettoken(string &data, int &i)
    {
        string token = "";
        while (i < data.size() && data[i] != ',')
        {
            token += data[i];
            i++;
        }
        i++;
        return token;
    }

    TreeNode *des(int &i, string &data)
    {
        if (i >= data.size())
            return nullptr;
        string token = gettoken(data, i);
        if (token == "#")
            return nullptr;
        TreeNode *root = new TreeNode(stoi(token));
        root->left = des(i, data);
        root->right = des(i, data);
        return root;
    }
    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data)
    {
        int i = 0;
        return des(i, data);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
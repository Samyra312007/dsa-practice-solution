/*

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

*/

class Solution {
  public:
    int isSumProperty(Node *root) {
        if(!root || (!root->left && !root->right)) return 1;
        int summ = 0;
        if(root->left){
            summ += root->left->data;
        }
        if(root->right){
            summ += root->right->data;
        }
        bool left = isSumProperty(root->left);
        bool right = isSumProperty(root->right);
        return (summ == root->data && left && right);
    }
};
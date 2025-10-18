/*
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int count(Node* root){
        if(!root) return 0;
        return 1+count(root->left)+count(root->right);
    }
    bool cbt(Node* root, int in, int total){
        if(!root) return 1;
        if(in >= total) return 0;
        return cbt(root->left, 2*in+1, total) && cbt(root->right, 2*in+2, total);
    }
    bool MaxHeap(Node* root){
        if(root->left){
            if(root->data < root->left->data) return 0;
            if(!MaxHeap(root->left)) return 0;
        }
        if(root->right){
            if(root->data < root->right->data) return 0;
            return MaxHeap(root->right);
        }
        return 1;
    }
    bool isHeap(Node* tree) {
        int num = count(tree);
        if(!cbt(tree, 0, num)) return 0;
        return MaxHeap(tree);
    }
};
/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    void premax(Node* root, int& max){
        if(!root) return;
        if(max < root->data) max = root->data;
        premax(root->left, max);
        premax(root->right, max);
    }
    void premin(Node* root, int& min){
        if(!root) return;
        if(min > root->data) min = root->data;
        premin(root->left, min);
        premin(root->right, min);
    }
    int findMax(Node *root) {
        int max = INT_MIN;
        premax(root, max);
        return max;
    }

    int findMin(Node *root) {
        int min = INT_MAX;
        premin(root, min);
        return min;
    }
};
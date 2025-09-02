/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void count(Node* root, int& cnt){
        if(root == NULL) return;
        cnt++;
        count(root->left, cnt);
        count(root->right, cnt);
    }
    
    int getSize(Node* node) {
        int cnt = 0;
        count(node, cnt);
        return cnt;
    }
};
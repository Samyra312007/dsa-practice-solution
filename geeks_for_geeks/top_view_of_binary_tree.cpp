/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    void find(Node* root, int pos, int& l, int& r){
        if(!root) return;
        l = min(pos, l);
        r = max(pos, r);
        find(root->left, pos-1, l, r);
        find(root->right, pos+1, l, r);
    }
    void tview(Node* root, int pos, vector<int>& ans, vector<int>& level, int l){
        if(!root) return;
        if(level[pos] > l){
            ans[pos] = root->data;
            level[pos] = l;
        }
        tview(root->left, pos-1, ans, level, l+1);
        tview(root->right, pos+1, ans, level, l+1);
    }
    vector<int> topView(Node *root) {
        int l = 0, r = 0;
        find(root, 0, l, r);
        vector<int> ans(r-l+1);
        vector<int> level(r-l+1, INT_MAX);
        tview(root, -1*l, ans, level, 0);
        return ans;
    }
};
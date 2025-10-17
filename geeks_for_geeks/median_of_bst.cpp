/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    void inorder(Node* root, vector<int>& res){
        if(!root) return;
        inorder(root->left, res);
        res.push_back(root->data);
        inorder(root->right, res);
    }
    int findMedian(Node* root) {
        vector<int> res;
        inorder(root, res);
        int med = 0;
        if(res.size() % 2 == 0) med = res[(res.size()-1)/2];
        else med = res[(res.size())/2];
        return med;
    }
};
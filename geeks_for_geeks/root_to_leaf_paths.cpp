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
    void collect(Node* root, vector<int>& path, vector<vector<int>>& paths){
        if(root == nullptr) return;
        path.push_back(root->data);
        if(root->left == nullptr && root->right == nullptr){
            paths.push_back(path);
        }
        else{
            collect(root->left, path, paths);
            collect(root->right, path, paths);
        }
        path.pop_back();
    }
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>> paths;
        vector<int> path;
        collect(root, path, paths);
        return paths;
    }
};
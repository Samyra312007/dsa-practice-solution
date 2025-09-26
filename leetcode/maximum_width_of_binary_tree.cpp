/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        int maxw = INT_MIN;
        while(!q.empty()){
            int n = q.size();
            int l = q.front().second;
            int r = q.back().second;
            maxw = max(maxw, r-l+1);
            while(n--){
                TreeNode* node = q.front().first;
                long long i = q.front().second;
                q.pop();
                if(node->left){
                    q.push({node->left, 2*i+1});
                }
                if(node->right){
                    q.push({node->right, 2*i+2});
                }
            }
        }
        return maxw;
    }
};
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
    int maxLevelSum(TreeNode* root) {
        if(root == NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        vector<int> arr;
        while(!q.empty()){
            int level = q.size();
            int level_sum = 0;
            for(int i = 0; i<level; i++){
                TreeNode* temp = q.front();
                q.pop();
                level_sum += temp->val;
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            arr.push_back(level_sum);
        }
        int ans = 0;
        int maxi = INT_MIN;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] > maxi){
                maxi = arr[i];
                ans = i+1;
            }
        }
        return ans;
    }
};
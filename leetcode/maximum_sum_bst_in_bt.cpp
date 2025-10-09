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
    class Box{
        public:
        bool bst;
        int sum;
        int max;
        int min;
        Box(){
            bst = 1;
            sum = 0;
            max = INT_MIN;
            min = INT_MAX;
        }
    };

    Box* find(TreeNode* root, int& sumval){
        if(!root){
            return new Box();
        }
        Box* left = find(root->left, sumval);
        Box* right = find(root->right, sumval);
        if(left->bst && right->bst && left->max < root->val && right->min > root->val){
            left->sum += right->sum + root->val;
            sumval = max(sumval, left->sum);
            left->max = right->max;
            if(left->max == INT_MIN) left->max = root->val;
            if(left->min == INT_MAX) left->min = root->val;
            return left;
        }
        else{
            left->bst = 0;
            return left;
        }
    }

    int maxSumBST(TreeNode* root) {
        int sumval = 0;
        find(root, sumval);
        return sumval;
    }
};
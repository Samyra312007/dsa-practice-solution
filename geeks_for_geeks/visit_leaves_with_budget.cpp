/* Binary Tree Node Structure
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    int getCount(Node *root, int k) {
        if(root == nullptr) return 0;
        vector<int> leafCost;
        stack<pair<Node*, int>> st;
        st.push({root, 1});
        while(!st.empty()){
            auto [node, level] = st.top();
            st.pop();
            if(node->left == nullptr && node->right == nullptr){
                leafCost.push_back(level);
                continue;
            }
            if(node->left != nullptr){
                st.push({node->left, level+1});
            }
            if(node->right != nullptr){
                st.push({node->right, level+1});
            }
        }
        
        sort(leafCost.begin(), leafCost.end());
        
        int count = 0;
        for(int cost : leafCost){
            if(k < cost){
                break;
            }
            k -= cost;
            count++;
        }
        return count;
    }
};
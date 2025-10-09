/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    
    class Box{
        public:
        bool bst;
        int size;
        int min;
        int max;
        
        Box(int data){
            bst = 1;
            size = 1;
            min = data;
            max = data;
        }
    };
    
    Box* find(Node* root, int& totalsize){
        if(!root->left && !root->right){
            totalsize = max(totalsize, 1);
            return new Box(root->data);
        }
        else if(!root->left && root->right){
            Box* head = find(root->right, totalsize);
            if(head->bst && head->min > root->data){
                head->size++;
                head->min = root->data;
                totalsize = max(totalsize, head->size);
                return head;
            }
            else{
                head->bst = 0;
                return head;
            }
        }
        else if(root->left && !root->right){
            Box* head = find(root->left, totalsize);
            if(head->bst && head->max < root->data){
                head->size++;
                head->max = root->data;
                totalsize = max(totalsize, head->size);
                return head;
            }
            else{
                head->bst = 0;
                return head;
            }
        }
        else{
            Box* left = find(root->left, totalsize);
            Box* right = find(root->right, totalsize);
            if(left->bst && right->bst && left->max < root->data && right->min > root->data){
                Box* head = new Box(root->data);
                head->size += left->size + right->size;
                head->min = left->min;
                head->max = right->max;
                totalsize = max(totalsize, head->size);
                return head;
            }
            else{
                left->bst = 0;
                return left;
            }
        }
    }
    
    int largestBst(Node *root) {
        int totalsize = 0;
        find(root, totalsize);
        return totalsize;
    }
};
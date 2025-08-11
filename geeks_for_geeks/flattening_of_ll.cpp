/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

class Solution {
  public:
    // Function which returns the  root of the flattened linked list.
    Node* merge(Node* l1, Node* l2){
        Node* dummynode = new Node(-1);
        Node* res = dummynode;
        while(l1!=NULL && l2!=NULL){
            if(l1->data < l2->data){
                res->bottom = l1;
                res = l1;
                l1 = l1->bottom;
            }
            else{
                res->bottom = l2;
                res = l2;
                l2 = l2->bottom;
            }
            res->next = NULL;
        }
        if(l1) res->bottom = l1;
        else res->bottom = l2;
        return dummynode->bottom;
    }
    
    Node *flatten(Node *root) {
        if(root==NULL || root->next == NULL){
            return root;
        }
        Node* mergehead = flatten(root->next);
        root = merge(root, mergehead);
        return root;
    }
};
// User function Template for C++

/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution {
  public:
  
    void deletenode(struct Node** head_ref, struct Node* del){
        if(*head_ref == NULL || del == NULL){
            return;
        }
        
        if(*head_ref == del){
            *head_ref = del->next;
        }
        
        if(del->next != NULL){
            del->next->prev = del->prev;
        }
        
        if(del->prev != NULL){
            del->prev->next = del->next;
        }
        
        free(del);
    }
    
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        if((*head_ref) == NULL){
            return;
        }
        struct Node* current = *head_ref;
        struct Node* next;
        while(current!=NULL){
            if(current->data == x){
                next = current->next;
                deletenode(head_ref, current);
                current = next;
            }
            else{
                current = current->next;
            }
        }
    }
};
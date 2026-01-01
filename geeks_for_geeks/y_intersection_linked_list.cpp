/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        Node* fast = head1;
        Node* slow = head2;
        while(fast != slow){
            fast = fast->next;
            slow = slow->next;
            if(slow == fast) return slow;
            if(slow == NULL) slow = head1;
            if(fast == NULL) fast = head2;
        }
        return slow;
    }
};
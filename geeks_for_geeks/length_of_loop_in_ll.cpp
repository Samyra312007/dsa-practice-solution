/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
public:
    int countNodes(Node *node)
    {
        int cnt = 1;
        Node *curr = node;
        while (curr->next != node)
        {
            cnt++;
            curr = curr->next;
        }
        return cnt;
    }
    int lengthOfLoop(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                return countNodes(slow);
            }
        }
        return 0;
    }
};
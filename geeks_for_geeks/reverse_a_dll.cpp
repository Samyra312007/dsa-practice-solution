class Solution
{
public:
    // Function to reverse a doubly linked list
    DLLNode *reverseDLL(DLLNode *head)
    {
        // Your code here
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        DLLNode *current = head;
        DLLNode *prev = NULL;
        while (current != NULL)
        {
            prev = current->prev;
            current->prev = current->next;
            current->next = prev;
            current = current->prev;
        };
        return prev->prev;
    }
};
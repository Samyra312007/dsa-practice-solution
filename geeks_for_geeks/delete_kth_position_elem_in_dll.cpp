class Solution
{
public:
    // Function to delete a node at given position.
    Node *deleteNode(Node *head, int x)
    {
        // Your code here
        Node *temp = head;
        int cnt = 0;
        while (temp != NULL)
        {
            cnt++;
            if (cnt == x)
                break;
            temp = temp->next;
        }
        Node *back = temp->prev;
        Node *front = temp->next;
        if (back == NULL && front == NULL)
        {
            delete (temp);
            return NULL;
        }
        else if (back == NULL)
        {
            head = head->next;
            front->prev = nullptr;
            temp->next = nullptr;
            delete (temp);
            return head;
        }
        else if (front == NULL)
        {
            back->next = nullptr;
            temp->prev = nullptr;
            delete (temp);
            return head;
        }
        back->next = front;
        front->prev = back;
        temp->next = temp->prev = nullptr;
        free(temp);
        return head;
    }
};
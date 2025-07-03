class Solution
{
public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data)
    {
        // code here
        Node *temp = head;
        int cnt = 0;
        while (temp != NULL && cnt < pos)
        {
            cnt++;
            temp = temp->next;
        }
        Node *front = temp->next;
        Node *newnode = new Node(data);

        temp->next = newnode;
        newnode->prev = temp;

        if (front != NULL)
        {
            front->prev = newnode;
            newnode->next = front;
        }
        else
        {
            newnode->next = nullptr;
        }
        return head;
    }
};
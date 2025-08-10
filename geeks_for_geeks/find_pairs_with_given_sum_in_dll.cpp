// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        vector<pair<int, int>> ans;
        Node *first = head;
        Node *second = head;
        while (second->next != NULL)
        {
            second = second->next;
        }

        bool found = false;

        while (first != second && second->next != first)
        {
            if ((first->data + second->data) == target)
            {
                found = true;
                ans.push_back({first->data, second->data});
                first = first->next;
                second = second->prev;
            }
            else
            {
                if ((first->data + second->data) < target)
                {
                    first = first->next;
                }
                else
                {
                    second = second->prev;
                }
            }
        }
        return ans;
    }
};
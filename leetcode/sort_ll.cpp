/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *findMiddle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode *merge(ListNode *left, ListNode *right)
    {
        ListNode *dummynode = new ListNode(-1);
        ListNode *temp = dummynode;
        while (left != NULL && right != NULL)
        {
            if (left->val < right->val)
            {
                temp->next = left;
                left = left->next;
            }
            else
            {
                temp->next = right;
                right = right->next;
            }
            temp = temp->next;
        }
        if (left)
            temp->next = left;
        else
            temp->next = right;
        return dummynode->next;
    }

    ListNode *mergesort(ListNode *head)
    {
        if (!head || !head->next)
        {
            return head;
        }
        ListNode *middle = findMiddle(head);
        ListNode *lefthead = head;
        ListNode *righthead = middle->next;
        middle->next = nullptr;
        lefthead = mergesort(lefthead);
        righthead = mergesort(righthead);
        return merge(lefthead, righthead);
    }

    ListNode *sortList(ListNode *head)
    {
        return mergesort(head);
    }
};
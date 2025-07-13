class Solution
{
public:
    void moveKtoend(queue<int> &q, int k)
    {
        if (k == 0)
            return;
        int val = q.front();
        q.pop();
        moveKtoend(q, k - 1);
        q.push(val);
    }
    queue<int> reverseFirstK(queue<int> &q, int k)
    {
        if (k > q.size() || k < 0)
            return q;
        moveKtoend(q, k);
        int t = q.size() - k;
        while (t-- > 0)
        {
            int val = q.front();
            q.pop();
            q.push(val);
        }
        return q;
    }
};
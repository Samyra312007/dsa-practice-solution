class Solution
{
public:
    void helper(stack<int> &st, priority_queue<int, vector<int>, greater<int>> &heap)
    {
        if (st.empty())
            return;
        int num = st.top();
        st.pop();
        heap.push(num);
        helper(st, heap);
        int num1 = heap.top();
        heap.pop();
        st.push(num1);
    }
    void sortStack(stack<int> &st)
    {
        priority_queue<int, vector<int>, greater<int>> heap;
        helper(st, heap);
    }
};

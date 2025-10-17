// User function Template for C++

class Solution
{
public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
    {
        priority_queue<int> heap;
        vector<int> ans;
        for (int i = 0; i < a.size(); i++)
        {
            heap.push(a[i]);
        }
        for (int i = 0; i < b.size(); i++)
        {
            heap.push(b[i]);
        }
        for (int i = 0; i < n + m; i++)
        {
            ans.push_back(heap.top());
            heap.pop();
        }
        return ans;
    }
};
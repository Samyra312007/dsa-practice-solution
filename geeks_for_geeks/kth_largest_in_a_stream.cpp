class Solution
{
public:
    vector<int> kthLargest(int k, int arr[], int n)
    {
        vector<int> ans;
        priority_queue<int, vector<int>, greater<int>> p;
        for (int i = 0; i < n; i++)
        {
            if (p.size() < k)
            {
                p.push(arr[i]);
            }
            else if (arr[i] > p.top())
            {
                p.pop();
                p.push(arr[i]);
            }
            if (p.size() == k)
            {
                ans.push_back(p.top());
            }
            else
            {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};
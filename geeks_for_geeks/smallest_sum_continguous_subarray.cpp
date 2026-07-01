class Solution
{
public:
    int smallestSumSubarray(vector<int> &a)
    {
        int n = a.size();
        int res = a[0];
        int minending = a[0];
        for (int i = 1; i < n; i++)
        {
            minending = min(a[i], minending + a[i]);
            res = min(res, minending);
        }
        return res;
    }
};

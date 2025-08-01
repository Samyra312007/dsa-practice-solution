class Solution
{
public:
    int maxSum(vector<int> &arr)
    {
        int res = 0;
        int n = arr.size();
        for (int i = 0; i < n - 1; i++)
        {
            res = max(res, arr[i] + arr[i + 1]);
        }
        return res;
    }
};
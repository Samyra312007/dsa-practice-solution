class Solution
{
public:
    int maxSubarraySum(vector<int> &arr)
    {
        int n = arr.size();
        int res = arr[0];
        int maxending = arr[0];
        for (int i = 1; i < n; i++)
        {
            maxending = max(arr[i], maxending + arr[i]);
            res = max(maxending, res);
        }
        return res;
    }
};
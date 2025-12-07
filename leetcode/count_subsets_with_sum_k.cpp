class Solution
{
public:
    int perfectSum(vector<int> &arr, int target)
    {
        int n = arr.size();
        int mod = 1e9 + 7;
        vector<vector<long long>> t(n + 1, vector<long long>(target + 1, 0));
        for (int i = 0; i < n + 1; i++)
            t[i][0] = 1;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 0; j < target + 1; j++)
            {
                t[i][j] = t[i - 1][j];
                if (arr[i - 1] <= j)
                {
                    t[i][j] = (t[i - 1][j] + t[i - 1][j - arr[i - 1]]) % mod;
                }
            }
        }
        return t[n][target];
    }
};
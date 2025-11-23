class Solution
{
public:
    bool helper(int ind, vector<int> &arr, int k, int summ, vector<vector<int>> &dp)
    {
        if (summ > k)
            return false;
        if (ind == arr.size())
        {
            if (summ == k)
            {
                return true;
            }
            return false;
        }
        if (dp[ind][summ] != -1)
            return dp[ind][summ];
        bool add = helper(ind + 1, arr, k, summ + arr[ind], dp);
        if (add)
            return dp[ind][summ] = true;
        bool sub = helper(ind + 1, arr, k, summ, dp);
        return dp[ind][summ] = add || sub;
    }
    bool checkSubsequenceSum(int n, vector<int> &arr, int k)
    {
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1));
        int summ = 0;
        return helper(0, arr, k, summ, dp);
    }
};
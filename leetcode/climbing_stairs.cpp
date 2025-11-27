class Solution
{
public:
    int solve(vector<int> &dp, int ans, int ind)
    {
        if (ind == 0)
            return 1;
        if (ind == 1)
            return 1;
        if (dp[ind] != -1)
            return dp[ind];
        int left = solve(dp, ans, ind - 1);
        int right = solve(dp, ans, ind - 2);
        return dp[ind] = left + right;
    }
    int climbStairs(int n)
    {
        vector<int> dp(n + 1, -1);
        int ans;
        return solve(dp, ans, n);
    }
};
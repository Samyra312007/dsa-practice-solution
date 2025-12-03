class Solution
{
public:
    int knap(vector<int> &wt, vector<int> &val, int W, int n, vector<vector<int>> &t)
    {
        if (n == 0 || W == 0)
            return 0;
        if (t[n][W] != -1)
            return t[n][W];
        if (wt[n - 1] <= W)
        {
            return t[n][W] = max(val[n - 1] + knap(wt, val, W - wt[n - 1], n - 1, t), knap(wt, val, W, n - 1, t));
        }
        else if (wt[n - 1] > W)
        {
            return t[n][W] = knap(wt, val, W, n - 1, t);
        }
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt)
    {
        int n = wt.size();
        vector<vector<int>> t(n + 1, vector<int>(W + 1, -1));
        return knap(wt, val, W, n, t);
    }
};
class Solution
{
public:
    int knapSack(vector<int> &val, vector<int> &wt, int capacity)
    {
        int n = val.size();
        vector<vector<int>> t(n + 1, vector<int>(capacity + 1, 0));
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < capacity + 1; j++)
            {
                if (wt[i - 1] <= j)
                {
                    t[i][j] = max(val[i - 1] + t[i][j - wt[i - 1]], t[i - 1][j]);
                }
                else
                    t[i][j] = t[i - 1][j];
            }
        }
        return t[n][capacity];
    }
};
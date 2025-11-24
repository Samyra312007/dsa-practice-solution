class Solution
{
public:
    void helper(vector<vector<int>> &ans, vector<int> ds, int k, int n, int i)
    {
        if (k == 0 && n == 0)
        {
            ans.push_back(ds);
            return;
        }
        if (i > 9)
            return;
        if (k < 0 || n < 0)
            return;
        ds.push_back(i);
        helper(ans, ds, k - 1, n - i, i + 1);
        ds.pop_back();
        helper(ans, ds, k, n, i + 1);
    }
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        helper(ans, ds, k, n, 1);
        return ans;
    }
};
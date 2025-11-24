class Solution
{
public:
    void helper(vector<vector<int>> &ans, int ind, int target, vector<int> &candidates, vector<int> ds)
    {
        if (ind == candidates.size())
        {
            if (target == 0)
                ans.push_back(ds);
            return;
        }
        if (target >= candidates[ind])
        {
            ds.push_back(candidates[ind]);
            helper(ans, ind, target - candidates[ind], candidates, ds);
            ds.pop_back();
        }
        helper(ans, ind + 1, target, candidates, ds);
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        helper(ans, 0, target, candidates, ds);
        return ans;
    }
};
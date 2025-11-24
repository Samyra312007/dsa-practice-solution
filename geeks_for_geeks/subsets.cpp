class Solution
{
public:
    void helper(vector<vector<int>> &ans, vector<int> ds, int ind, vector<int> &arr)
    {
        if (ind == arr.size())
        {
            ans.push_back(ds);
            return;
        }
        ds.push_back(arr[ind]);
        helper(ans, ds, ind + 1, arr);
        ds.pop_back();
        helper(ans, ds, ind + 1, arr);
    }
    vector<vector<int>> subsets(vector<int> &arr)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        helper(ans, ds, 0, arr);
        return ans;
    }
};
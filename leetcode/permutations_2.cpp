class Solution
{
public:
    void solve(int ind, vector<int> nums, vector<vector<int>> &ans)
    {
        if (ind == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for (int i = ind; i < nums.size(); i++)
        {
            swap(nums[ind], nums[i]);
            solve(ind + 1, nums, ans);
            swap(nums[ind], nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<vector<int>> res;
        set<vector<int>> mpp;
        solve(0, nums, ans);
        for (int i = 0; i < ans.size(); i++)
        {
            mpp.insert(ans[i]);
        }
        for (auto it : mpp)
        {
            res.push_back(it);
        }
        return res;
    }
};
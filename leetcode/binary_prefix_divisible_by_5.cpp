class Solution
{
public:
    vector<bool> prefixesDivBy5(vector<int> &nums)
    {
        vector<int> presum(nums.size());
        vector<bool> ans(presum.size());
        presum[0] = nums[0] * 1;
        for (int i = 1; i < nums.size(); i++)
        {
            presum[i] = (presum[i - 1] * 2 + nums[i]) % 5;
        }
        for (int i = 0; i < presum.size(); i++)
        {
            if (presum[i] == 0)
                ans[i] = true;
            else
                ans[i] = false;
        }
        return ans;
    }
};
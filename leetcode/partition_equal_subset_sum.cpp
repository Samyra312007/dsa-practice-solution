class Solution
{
public:
    bool subsetsum(vector<int> &nums, int val)
    {
        int n = nums.size();
        vector<vector<bool>> t(n + 1, vector<bool>(val + 1, false));
        for (int i = 0; i < n + 1; i++)
            t[i][0] = true;
        for (int j = 0; j < val + 1; j++)
            t[0][j] = false;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < val + 1; j++)
            {
                if (nums[i - 1] <= j)
                {
                    t[i][j] = t[i - 1][j - nums[i - 1]] || t[i - 1][j];
                }
                else
                    t[i][j] = t[i - 1][j];
            }
        }
        return t[n][val];
    }
    bool canPartition(vector<int> &nums)
    {
        long long int summ = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            summ += nums[i];
        }
        if (summ % 2 != 0)
            return false;
        return subsetsum(nums, summ / 2);
    }
};
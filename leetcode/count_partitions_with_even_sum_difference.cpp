class Solution
{
public:
    int summ(vector<int> &nums, int ind)
    {
        int val = 0;
        for (int j = ind; j < nums.size(); j++)
        {
            val += nums[j];
        }
        return val;
    }
    int countPartitions(vector<int> &nums)
    {
        int cnt = 0;
        vector<int> prefix(nums.size(), 0);
        prefix[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if ((prefix[i] - summ(nums, i + 1)) % 2 == 0)
                cnt++;
        }
        return cnt;
    }
};
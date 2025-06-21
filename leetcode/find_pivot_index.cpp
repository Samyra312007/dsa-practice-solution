class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int prefix = 0;
        int suffix = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            suffix += nums[i];
        }
        for (int j = 0; j < nums.size(); j++)
        {
            prefix = prefix + nums[j];
            if (prefix != suffix)
            {
                suffix = suffix - nums[j];
            }
            else
            {
                return j;
            }
        }
        return -1;
    }
};
class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        int mini = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 3 == 0)
            {
                continue;
            }
            else
            {
                if ((nums[i] - 1) % 3 == 0)
                    mini += 1;
                else if ((nums[i] + 1) % 3 == 0)
                    mini += 1;
            }
        }
        return mini;
    }
};
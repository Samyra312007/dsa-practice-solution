class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int summ = 0;
        int opr = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            summ += nums[i];
        }
        if (summ % k == 0)
            return 0;
        else
        {
            opr = summ % k;
        }
        return opr;
    }
};
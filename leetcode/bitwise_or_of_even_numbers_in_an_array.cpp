class Solution
{
public:
    int evenNumberBitwiseORs(vector<int> &nums)
    {
        int n = nums.size();
        int nor = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] % 2 == 0)
            {
                nor = nor | nums[i];
            }
        }
        return nor;
    }
};
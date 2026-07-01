class Solution
{
public:
    int maximumDifference(vector<int> &nums)
    {
        int n = nums.size();
        int maxdiff = -1;
        int elem = nums[0];
        for (int i = 1; i < n; i++)
        {
            if (nums[i] > elem)
            {
                maxdiff = max(maxdiff, nums[i] - elem);
            }
            else
            {
                elem = nums[i];
            }
        }
        return maxdiff;
    }
};
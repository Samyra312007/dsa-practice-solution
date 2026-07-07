class Solution
{
public:
    int minOperations(vector<int> &nums, int k)
    {
        int res = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] < k)
                res++;
        }
        return res;
    }
};
class Solution
{
public:
    int numSubseq(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int mod = 1e9 + 7;
        vector<int> power(nums.size());
        power[0] = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            power[i] = (power[i - 1] * 2) % mod;
        }
        int i = 0;
        int j = nums.size() - 1;
        int val = 0;
        while (i <= j)
        {
            if (nums[i] + nums[j] <= target)
            {
                int diff = j - i;
                val = (val % mod + power[diff]) % mod;
                i++;
            }
            else
                j--;
        }
        return val;
    }
};
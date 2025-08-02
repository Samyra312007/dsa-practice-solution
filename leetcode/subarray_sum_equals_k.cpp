class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> prefixSum;
        int n = nums.size();
        int res = 0;
        int currSum = 0;
        for (int i = 0; i < n; i++)
        {
            currSum += nums[i];
            if (currSum == k)
                res++;

            if (prefixSum.find(currSum - k) != prefixSum.end())
            {
                res += prefixSum[currSum - k];
            }
            prefixSum[currSum]++;
        }
        return res;
    }
};
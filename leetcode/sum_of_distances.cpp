class Solution
{
public:
    vector<long long> distance(vector<int> &nums)
    {
        long long n = nums.size();
        vector<long long> result(n, 0);
        unordered_map<int, long long> indexSum;
        unordered_map<int, long long> indexCount;
        for (int i = 0; i < n; i++)
        {
            long long freq = indexCount[nums[i]];
            long long sum = indexSum[nums[i]];
            result[i] += freq * i - sum;
            indexCount[nums[i]] += 1;
            indexSum[nums[i]] += i;
        }
        indexSum.clear();
        indexCount.clear();
        for (int i = n - 1; i >= 0; i--)
        {
            long long freq = indexCount[nums[i]];
            long long sum = indexSum[nums[i]];
            result[i] += sum - freq * i;
            indexCount[nums[i]] += 1;
            indexSum[nums[i]] += i;
        }
        return result;
    }
};
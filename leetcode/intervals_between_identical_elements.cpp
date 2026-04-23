class Solution
{
public:
    vector<long long> getDistances(vector<int> &arr)
    {
        long long n = arr.size();
        vector<long long> result(n, 0);
        unordered_map<int, long long> indexSum;
        unordered_map<int, long long> indexCount;
        for (int i = 0; i < n; i++)
        {
            long long freq = indexCount[arr[i]];
            long long sum = indexSum[arr[i]];
            result[i] += freq * i - sum;
            indexCount[arr[i]] += 1;
            indexSum[arr[i]] += i;
        }
        indexSum.clear();
        indexCount.clear();
        for (int i = n - 1; i >= 0; i--)
        {
            long long freq = indexCount[arr[i]];
            long long sum = indexSum[arr[i]];
            result[i] += sum - freq * i;
            indexCount[arr[i]] += 1;
            indexSum[arr[i]] += i;
        }
        return result;
    }
};
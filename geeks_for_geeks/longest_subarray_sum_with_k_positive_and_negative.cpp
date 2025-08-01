class Solution
{
public:
    int longestSubarray(vector<int> &arr, int k)
    {
        map<int, int> prefSum;
        int sum = 0;
        int maxlen = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
            if (sum == k)
            {
                maxlen = max(maxlen, i + 1);
            }
            int rem = sum - k;
            if (prefSum.find(rem) != prefSum.end())
            {
                int len = i - prefSum[rem];
                maxlen = max(maxlen, len);
            }
            if (prefSum.find(sum) == prefSum.end())
            {
                prefSum[sum] = i;
            }
        }
        return maxlen;
    }
};
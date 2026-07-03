class Solution
{
public:
    int cntSubarrays(vector<int> &arr, int k)
    {
        int n = arr.size();
        int res = 0;
        unordered_map<int, int> mpp;
        int prefixsum = 0;
        for (int i = 0; i < n; i++)
        {
            prefixsum += arr[i];

            if (prefixsum == k)
                res++;

            if (mpp.find(prefixsum - k) != mpp.end())
            {
                res += mpp[prefixsum - k];
            }
            mpp[prefixsum]++;
        }
        return res;
    }
};
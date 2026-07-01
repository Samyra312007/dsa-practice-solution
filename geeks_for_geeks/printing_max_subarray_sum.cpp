class Solution
{
public:
    vector<int> findSubarray(vector<int> &arr)
    {
        int n = arr.size();
        int summ = 0;
        int maxsum = -1;
        int i = 0;
        int start = 0;
        int beststart = -1;
        int bestlength = 0;
        while (i < n)
        {
            while (i < n && arr[i] < 0)
                i++;
            summ = 0;
            start = i;
            while (i < n && arr[i] >= 0)
            {
                summ += arr[i];
                int curlength = i - start + 1;
                if ((summ > maxsum) || (summ == maxsum && curlength > bestlength) || (summ == maxsum && curlength == bestlength && start < beststart))
                {
                    maxsum = summ;
                    bestlength = curlength;
                    beststart = start;
                }
                i++;
            }
            summ = 0;
        }
        if (beststart == -1)
            return {-1};

        vector<int> res;
        for (int i = beststart; i < beststart + bestlength; i++)
        {
            res.push_back(arr[i]);
        }
        return res;
    }
};
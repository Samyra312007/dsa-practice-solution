class Solution
{
public:
    int maxLength(vector<int> &arr)
    {
        int n = arr.size();
        unordered_map<int, int> firstseen;
        int maxlen = 0;
        int prefixsum = 0;
        firstseen[0] = -1;

        for (int i = 0; i < n; i++)
        {
            prefixsum += arr[i];

            if (firstseen.find(prefixsum) != firstseen.end())
            {
                int prevIndex = firstseen[prefixsum];
                int length = i - prevIndex;
                maxlen = max(maxlen, length);
            }
            else
            {
                firstseen[prefixsum] = i;
            }
        }
        return maxlen;
    }
};

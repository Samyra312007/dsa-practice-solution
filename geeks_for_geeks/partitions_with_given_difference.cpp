class Solution
{
public:
    long long subsetsum(vector<int> &arr, int summ)
    {
        int n = arr.size();
        vector<vector<long long>> t(n + 1, vector<long long>(summ + 1, 0));
        for (int i = 0; i < n + 1; i++)
            t[i][0] = 1;
        for (int j = 1; j < summ + 1; j++)
            t[0][j] = 0;
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 0; j < summ + 1; j++)
            {
                if (arr[i - 1] <= j)
                {
                    t[i][j] = t[i - 1][j] + t[i - 1][j - arr[i - 1]];
                }
                else
                    t[i][j] = t[i - 1][j];
            }
        }
        return t[n][summ];
    }
    int countPartitions(vector<int> &arr, int diff)
    {
        int summ = 0;
        for (int i = 0; i < arr.size(); i++)
            summ += arr[i];
        if (diff > summ)
            return 0;
        if ((summ + diff) % 2 != 0)
            return 0;
        int s1 = (summ + diff) / 2;
        return subsetsum(arr, s1);
    }
};
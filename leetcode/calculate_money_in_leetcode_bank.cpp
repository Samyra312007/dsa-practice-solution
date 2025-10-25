class Solution
{
public:
    int totalMoney(int n)
    {
        if (n <= 7)
            return (n * (n + 1)) / 2;
        int times = n / 7;
        int mon = 1;
        int start = 28;
        int res = 0;
        mon += times;
        while (times--)
        {
            res += start;
            start += 7;
        }
        for (int i = 0; i < (n % 7); i++)
        {
            res += mon;
            mon += 1;
        }
        return res;
    }
};
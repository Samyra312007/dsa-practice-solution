class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0)
            return 0;
        long long n = exp(0.5 * log(x));
        if ((n + 1) * (n + 1) <= x)
            return (n + 1);
        if (n * n > x)
            return (n - 1);
        return n;
    }
};
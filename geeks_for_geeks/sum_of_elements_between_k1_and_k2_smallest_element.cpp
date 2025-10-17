class Solution
{
public:
    long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2)
    {
        long long res = 0;
        sort(A, A + N);
        for (long long i = 0; i < N; i++)
        {
            if (i > K1 - 1 && i < K2 - 1)
            {
                res += A[i];
            }
        }
        return res;
    }
};
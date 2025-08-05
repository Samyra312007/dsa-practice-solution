class Solution
{
public:
    int count(int n)
    {
        if (n <= 2)
            return 0;
        vector<int> prime(n, 1);
        int cnt = 0;
        prime[0] = prime[1] = 0;
        for (int i = 2; i * i < n; i++)
        {
            if (prime[i])
            {
                for (int j = i * i; j < n; j += i)
                {
                    prime[j] = 0;
                }
            }
        }
        for (int i = 2; i < n; i++)
        {
            if (prime[i])
            {
                cnt++;
            }
        }
        return cnt;
    }
    int countPrimes(int n)
    {
        return count(n);
    }
};
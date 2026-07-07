class Solution
{
public:
    long long sumAndMultiply(int n)
    {
        if (n == 0)
            return 0;
        long long summ = 0;
        string x = "";
        while (n > 0)
        {
            summ += (n % 10);
            if (n % 10 != 0)
            {
                x += to_string(n % 10);
            }
            n /= 10;
        }
        reverse(x.begin(), x.end());
        int num = atoi(x.c_str());
        return num * summ;
    }
};
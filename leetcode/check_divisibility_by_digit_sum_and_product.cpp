class Solution
{
public:
    bool checkDivisibility(int n)
    {
        int sum = 0;
        int prd = 1;
        int val = n;
        while (n > 0)
        {
            int d = n % 10;
            sum += d;
            prd *= d;
            n /= 10;
        }
        if (val % (sum + prd) == 0)
            return true;
        return false;
    }
};
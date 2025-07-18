class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
            return false;
        int x = log2(n);
        int num = pow(2, x);
        if (num == n)
        {
            return true;
        }
        return false;
    }
};
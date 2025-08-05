// User function Template for C++

class Solution
{
public:
    int xoring(int n)
    {
        if (n % 4 == 1)
            return 1;
        else if (n % 4 == 2)
            return n + 1;
        else if (n % 4 == 3)
            return 0;
        else if (n % 4 == 0)
            return n;
    }

    int funcxoring(int l, int r)
    {
        return xoring(l - 1) ^ xoring(r);
    }

    int findXOR(int l, int r)
    {
        return funcxoring(l, r);
    }
};
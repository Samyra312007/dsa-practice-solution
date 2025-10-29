class Solution
{
public:
    int smallestNumber(int n)
    {
        int seti;
        for (int i = 1; i <= 10; i++)
        {
            seti = (1 << i);
            if (seti - 1 >= n)
                break;
        }
        return seti - 1;
    }
};
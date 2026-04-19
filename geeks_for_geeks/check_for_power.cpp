class Solution
{
public:
    bool isPower(int x, int y)
    {
        if (x == 1)
        {
            return y == 1;
        }
        if (y == 1)
        {
            return true;
        }

        double result = log(y) / log(x);
        return fabs(result - round(result)) < 1e-10;
    }
};
class Solution
{
public:
    int smallestEvenMultiple(int n)
    {
        int ans = 1;
        while (1)
        {
            if ((ans % n == 0) && (ans % 2 == 0))
                break;
            ans++;
        }
        return ans;
    }
};